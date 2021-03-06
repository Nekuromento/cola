"							-*- Smalltalk -*-
  Copyright (c) 2005-2008 Ian Piumarta
  All rights reserved.

  Permission is hereby granted, free of charge, to any person obtaining a
  copy of this software and associated documentation files (the 'Software'),
  to deal in the Software without restriction, including without limitation
  the rights to use, copy, modify, merge, publish, distribute, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, provided that the above copyright notice(s) and this
  permission notice appear in all copies of the Software and that both the
  above copyright notice(s) and this permission notice appear in supporting
  documentation.

  THE SOFTWARE IS PROVIDED 'AS IS'.  USE ENTIRELY AT YOUR OWN RISK.

  Last edited: 2008-09-29 10:21:45 by piumarta on emilia.local
"

{ import: CodeGenerator }

"I am a code generator for target machines that understand C program source."

CCodeGenerator : CodeGenerator (
    output		"WriteStream on the output program text"
    firstInfoTag	"Integer sequence number of first info structure emitted"
    lastInfoTag		"Integer sequence number of last info structure emitted"
)

[
    CodeGenerators at: #native put: CCodeGenerator
]

CCodeGenerator new
[
    self := super new.
    firstInfoTag := nil.
    lastInfoTag := nil.
]

CCodeGenerator generate: program on: aStream for: aCompiler outputType: outputType fileName: fileName
[
    "Generate an entire program on aStream within aCompiler's global context.
    If outputType is #program then generate global program entry point and initialisation.
    If outputType is #object then append fileName to global initialiser."
    self := self withCompiler: aCompiler encoder: (Encoder withGlobalContext: aCompiler knownSelectors: aCompiler knownSelectors).
    output := aStream.
    program do: [:node | node encode: encoder].
    self genl: (self headerTextType: outputType).
    encoder selectors do: [:var | self gen: 'static oop s_'; gen: var; genl: '= 0;'].		"declare selector"
    self genl: 'static struct _Selector { const char *name; oop *addr; } _Selectors[]= {'.	"selector table"
    encoder selectors keysAndValuesDo: [:string :var | self gen: '  { "'; genString: string ; gen: '", &s_'; gen: var; genl: ' },'].
    self genl: '  { 0, 0 }'; genl: '};'.
    program do: [:node | node genDeclaration: self].
    program do: [:node | node genDefinition: self].
    program do: [:node | node genImplementation: self].
    self genl: (self initTextType: outputType fileName: fileName).
    program do: [:node | node genInitialisation: self].
    self genl: '  _leave();'.
    self genl: '}'.
    outputType == #program ifTrue: [self genl: self mainText].
    outputType == #windows ifTrue: [self genl: self winText].
    ^output
]

CCodeGenerator headerTextType: outputType
[
    ^
'/* generated by Id 1.1 at ', String dateAndTimeZuluStamp, ' */
/* with the command:', (Smalltalk arguments inject: '' into: [:s :a | s,' ',a]), ' */

#include <id/id.h>

static struct __libid *_libid= 0;

#ifdef ID_DEBUG
# define _enter(info) void *__id_debug= _libid->enter(info)
# define _line(lno)			_libid->line(lno)
# define _leave()			_libid->leave(__id_debug)
# define _backtrace()			_libid->backtrace()
#else
# define _enter(info)			(void)info
# define _line(lno)
# define _leave()
# define _backtrace()			"(no debugging information)\\n"
#endif
#define _return			_leave(); return
', self sendText, '
#define _superv(TYP, MSG, N, RCV, ARG...) ({	\\
  struct __send _s= { (MSG), (N), (TYP) };	\\
  _imp_t _imp= _libid->bindv(&_s);		\\
  _s.receiver= (RCV);				\\
  _imp(&_s, _s.receiver, _s.receiver, ##ARG);	\\
})
']

CCodeGenerator sendText
[
    compiler cacheLevel == 0 ifTrue: [^self sendNoCacheText].
    compiler cacheLevel == 1 ifTrue: [^self sendInlineCacheText].
    compiler error: 'unsupported cache level: ', compiler cacheLevel printString
]

CCodeGenerator sendNoCacheText
[
    ^'
#define _sendv(MSG, N, RCV, ARG...) ({					\\
  struct __send _s= { (MSG), (N), (RCV) };				\\
  ((_imp_t)(_libid->bindv(&_s)))(&_s, _s.receiver, _s.receiver, ##ARG);	\\
})
']

CCodeGenerator sendInlineCacheText
[
    ^'
struct __entry
{
  oop		    vtable;
  struct __closure *closure;
};

#define _sendv(MSG, N, RCV, ARG...) ({					\\
  struct __send _s={ (MSG), (N), (RCV) };				\\
  ((_imp_t)(_libid->bindv(&_s)))(&_s, _s.receiver, _s.receiver, ##ARG);	\\
})
']

CCodeGenerator initTextType: outputType fileName: fileName
[
    ^'
static struct __methodinfo __info= { "__id__init__", "<initialisation>", "', fileName escaped, '", 0, 0, 0, ',
(lastInfoTag ifTrue: ['&__info', lastInfoTag printString] ifFalse: ['0']), ' };
void __id__init__', (outputType == #object ifTrue: [encoder mangleSelector: (fileName withoutSuffix: '.st')] ifFalse: ['']), '(struct __libid *__libid)
{
  if (_libid) return;
  if (!(_libid= __libid)) { fprintf(stderr, "init _libid %p\\n", __libid);  abort(); }',
  (outputType == #program ifTrue: [''] ifFalse: ['
# define GC_add_roots _libid->gc_addRoots
  GC_INIT();']), '
  {
    struct _Selector *s= 0;
    for (s= _Selectors;  s->name;  ++s)
      *s->addr= _libid->intern(s->name);
  }
  _enter(&__info);
  _libid->infos(&__info, &__info', (firstInfoTag ifTrue: [firstInfoTag printString] ifFalse: ['']), ');
']

CCodeGenerator mainText
[
    ^'
int main(int argc, char *argv[])
{
#if defined(WIN32)
  void *init= GetProcAddress(GetModuleHandle(0), "_libid_init");
#else
  void *init= dlsym(RTLD_DEFAULT, "_libid_init");
#endif
  struct __libid *libid;
  char **envp= { 0 };
  if (!init) { fprintf(stderr, "id runtime not found\\n");  abort(); }
  libid= ((struct __libid *(*)(int *, char ***, char ***))init)(&argc, &argv, &envp);
  __id__init__(libid);
  return 0;
}

#if defined(EMBEDDED)
extern void _start(void);
void *StartTVector[2]= { (void *)_start, 0 };
#endif']

CCodeGenerator winText
[
    ^'
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
  void *init= GetProcAddress(GetModuleHandle(0), "_libid_init");
  struct __libid *libid;
  if (!init) { fprintf(stderr, "id runtime not found\\n");  abort(); }
  libid= ((struct __libid *(*)(int *, char ***, char ***))init)(0, 0, 0);
  __id__init__(libid);
  return 0;
}']

"writing to the output stream"

CCodeGenerator put: aCharacter	[ output nextPut: aCharacter ]
CCodeGenerator print: anObject	[ output print: anObject ]
CCodeGenerator gen: aString	[ output nextPutAll: aString ]
CCodeGenerator genl: aString	[ output nextPutAll: aString; nl ]
CCodeGenerator comment: aString	[ output nextPutAll: '  '; nextPutAll: '/* '; nextPutAll: aString; nextPutAll: ' */'; nl ]

"writing specific types of information, with a type-specific prefix"

CCodeGenerator genSelector: aSelector
[
    output
	nextPutAll: 's_';
	nextPutAll: (encoder selectors
			 at: aSelector
			 ifAbsent: [self error: 'internal compiler error #2 (', aSelector printString, ')']).
]

CCodeGenerator genLocation: aLocation	[ output nextPut: $_; print: aLocation ]
CCodeGenerator genStruct: name		[ output nextPutAll: 'struct t_'; nextPutAll: name ]
CCodeGenerator genVariable: name	[ output nextPutAll: 'v_'; nextPutAll: name ]
CCodeGenerator genLiteral: tag		[ output nextPutAll: 'l_'; print: tag ]
CCodeGenerator genBlock: tag		[ output nextPutAll: 'b_'; print: tag ]
CCodeGenerator genLabel: tag		[ output nextPutAll: '_l'; print: tag ]

CCodeGenerator genString: string
[
    string do: [:c |
	c == $\\ ifTrue: [output nextPut: c].
	output nextPut: c]
]

CCodeGenerator genType: name method: selector
[
    output
	nextPutAll: name; nextPutAll: '__';
	nextPutAll: (encoder selectors
			 at: selector
			 ifAbsent: [self error: 'internal compiler error #3 (', selector printString, ')']).
]

CCodeGenerator genType: name sequence: sequenceNumber method: selector
[
    output nextPutAll: name.
    sequenceNumber > 0 ifTrue: [output nextPutAll: '__'; print: sequenceNumber].
    output
	nextPutAll: '__';
	nextPutAll: (encoder selectors
			 at: selector
			 ifAbsent: [self error: 'internal compiler error #3 (', selector printString, ')']).
]

"unparsed code: external code and primitives"

CCodeGenerator genExtern: code
[
    self genl: ' {'; gen: code; genl: '  ;'; genl: ' }'.
]

CCodeGenerator genInclude: name
[
    self gen: '#include '; genl: name.
]

CCodeGenerator genPrimitive: code in: mtype
[
    self genl: ' {'.
    mtype isNil ifFalse: [self gen:  '# define self (('; genStruct: mtype name; genl: ' *)v_self)'].
    self genl: code.
    mtype isNil ifFalse: [self genl: '# undef self'].
    self genl: ' }'.
]

"stack: loading constants and literals"

CCodeGenerator loadNil: loc
[
    self gen: '  '; genLocation: loc; genl: '= 0;'.
]

CCodeGenerator declareLiteral: tag
[
    self gen: 'static oop '; genLiteral: tag; genl: '= 0;'.
]

CCodeGenerator defineLiteral: tag []

CCodeGenerator loadLiteral: tag to: loc
[
    self gen: '  '; genLocation: loc; gen: '= '; genLiteral: tag; genl: ';'.
]

CCodeGenerator initialiseInteger: tag constructor: constructor with: anInteger
[
    self
	gen: '  '; genLiteral: tag; gen: '= _sendv(';
	genSelector: constructor value; gen: ', 2, ';
	genVariable: constructor key; gen: ', ';
	print: anInteger; genl: ');'.
]

CCodeGenerator initialiseLargeInteger: tag constructor: constructor with: anInteger
[
    self
	gen: '  '; genLiteral: tag; gen: '= _sendv(';
	genSelector: constructor value; gen: ', 3, ';
	genVariable: constructor key; gen: ', ';
	print: anInteger digitLength; gen: ', "'.
    anInteger bytes
	do: [:byte |
	    self
		put: $\\;
		put: (Character digitValue: byte // 64 \\ 8);
		put: (Character digitValue: byte //  8 \\ 8);
		put: (Character digitValue: byte       \\ 8)].
    self genl: '");'.
]

CCodeGenerator defineFloat: tag withValue: aString
[
    | first |
    self gen: 'static double d_'; print: tag; gen: '= '; gen: aString; genl: ';'.
]

CCodeGenerator initialiseFloat: tag constructor: constructor with: aString
[
    self
	gen: '  '; genLiteral: tag; gen: '= _sendv(';
	genSelector: constructor value; gen: ', 2, ';
	genVariable: constructor key; gen: ', &d_';
	print: tag; genl: ');'.
]

CCodeGenerator initialiseCharacter: tag constructor: constructor with: aCharacter
[
    self
	gen: '  '; genLiteral: tag; gen: '= _sendv(';
	genSelector: constructor value; gen: ', 2, ';
	genVariable: constructor key; gen: ', ';
	print: aCharacter value; genl: ');'.
]

CCodeGenerator initialiseString: tag constructor: constructor with: aString
[
    self
	gen: '  '; genLiteral: tag; gen: '= _sendv(';
	genSelector: constructor value;	gen: ', 3, ';
	genVariable: constructor key;   gen: ', ';
	print:       aString size;      gen: ', "'.
    aString do: [:char |
	char = $"
	    ifTrue:
	       [self gen: '\\"']
	    ifFalse:
	       [| ascii |
		ascii := char asciiValue.
                (ascii >= 32 and: [ascii < 127 and: [char ~~ $" and: [char ~~ $\\]]])
		    ifTrue:
		       [self put: char]
		    ifFalse:
		       [self
			    put: $\\;
			    put: (Character digitValue: ascii // 64 \\ 8);
			    put: (Character digitValue: ascii //  8 \\ 8);
			    put: (Character digitValue: ascii       \\ 8)]]].
    self genl: '");'.
]

CCodeGenerator initialiseByteArray: tag constructor: constructor with: aByteArray
[
    self
	gen: '  '; genLiteral: tag; gen: '= _sendv(';
	genSelector: constructor value;	gen: ', 3, ';
	genVariable: constructor key;   gen: ', ';
	print:       aByteArray size;   gen: ', "'.
    aByteArray
	do: [:byte |
	    self
		put: $\\;
		put: (Character digitValue: byte // 64 \\ 8);
		put: (Character digitValue: byte //  8 \\ 8);
		put: (Character digitValue: byte       \\ 8)].
    self genl: '");'.
]

CCodeGenerator defineWordArray: tag withElements: aWordArray
[
    | first |
    self gen: 'static int w'; genLiteral: tag; gen: '['; print: aWordArray size; genl: ']= {'.
    first := true.
    aWordArray do: [:word |
	first ifTrue: [first := false] ifFalse: [self genl: ','].
	self genl: '  '; print: word].
    self genl: ''; genl: '};'.
]

CCodeGenerator initialiseWordArray: tag constructor: constructor with: aWordArray
[
    self
	gen: '  '; genLiteral: tag; gen: '= _sendv(';
	genSelector: constructor value;	gen: ', 3, ';
	genVariable: constructor key;   gen: ', ';
	print:       aWordArray size;   gen: ', ';
	gen:  'w';   genLiteral: tag;
	genl: ');'.
]

CCodeGenerator defineArray: tag withElements: anArray
[
    | first |
    self gen: 'static oop a'; genLiteral: tag; gen: '['; print: anArray size; genl: ']= {'.
    first := true.
    anArray do: [:element |
	first ifTrue: [first := false] ifFalse: [self genl: ','].
	self genl: '  '; gen: '(oop)&'; genLiteral: element tag].
    self genl: ''; genl: '};'.
]

CCodeGenerator initialiseArray: tag constructor: constructor with: anArray
[
    self
	gen: '  '; genLiteral: tag; gen: '= _sendv(';
	genSelector: constructor value;	gen: ', 3, ';
	genVariable: constructor key;   gen: ', ';
	print:       anArray size;   gen: ', ';
	gen:  'a';   genLiteral: tag;
	genl: ');'.
]

"blocks"

CCodeGenerator initialiseBlock: blockTag function: functionTag arity: arity constructor: constructor
[
    self
	gen: '  '; genLiteral: blockTag; gen: '= _sendv(';
	genSelector: constructor value; gen: ', 3, ';
	genVariable: constructor key;   gen: ', ';
	genBlock:    functionTag;       gen: ', ';	"function"
	print:       arity;				"arity"
	genl: ');'.
]

CCodeGenerator loadBlock: tag location: loc
[
    self gen: '  '; genLocation: loc; gen: '= '; genLiteral: tag; genl: ';'.
]

CCodeGenerator makeBlock:   tag
	       constructor: constructor
	       outerFlag:   outerFlag
	       function:    functionTag
	       arity:       arity
	       state:       scopeTagOrNil
	       nlrFlag:     nlrFlag
	       location:    location
[
    self
	gen: '  '; genLocation: location; gen: '= _sendv('; genSelector: constructor value;
	gen: ', 6, ';	genVariable: constructor key;			"type"
	gen: ', (oop)'; genBlock: functionTag;				"function"
	gen: ', ';	print: arity;					"arity"
	gen: ', '; gen: (outerFlag ifTrue: ['v__self'] ifFalse: ['0']).	"outer"
    scopeTagOrNil isNil
	ifTrue:  [self gen: ', 0']					"state"
	ifFalse: [self gen: ', '; genState: scopeTagOrNil].
    self
	gen: ', ';
	gen: (nlrFlag							"nlr"
		  ifTrue:
		      [outerFlag
			   ifTrue:  ['((struct t_BlockClosure *)v__self)->v__nlr']
			   ifFalse: ['_nlr']]
		  ifFalse: ['0']);
	genl: ');'.
]

"stack: loading and storing variables"

CCodeGenerator loadVararg: va location: loc
[
    self gen: '  '; genLocation: loc; genl: '= va_arg(ap, oop);'.
]

CCodeGenerator loadGlobal: var location: loc
[
    self gen: '  '; genLocation: loc; gen: '= '; genVariable: var name; genl: ';'.
]

CCodeGenerator storeGlobal: var location: loc
[
    self
	gen: '  '; genVariable: var name; gen: '= '; genLocation: loc; genl: ';';
	gen: '  '; gen: '_libid->export("'; gen: var name; gen: '", '; genVariable: var name; genl: ');'.
]

CCodeGenerator loadSlot: slot type: type location: loc
[
    self gen: '  '; genLocation: loc; gen: '= (('; genStruct: type name; gen: ' *)v_stateful_self)->'; genVariable: slot name; genl: ';'.
]

CCodeGenerator storeSlot: slot type: type location: loc
[
    self gen: '  (('; genStruct: type name; gen: ' *)v_stateful_self)->'; genVariable: slot name; gen: '= '; genLocation: loc; genl: ';'.
]

CCodeGenerator loadArgument: arg location: loc
[
    self gen: '  '; genLocation: loc; gen: '= '; genVariable: arg name; genl: ';'.
]

CCodeGenerator storeArgument: arg location: loc
[
    self gen: '  '; genVariable: arg name; gen: '= '; genLocation: loc; genl: ';'.
]

CCodeGenerator loadTemporary: tmp location: loc
[
    self gen: '  '; genLocation: loc; gen: '= '; genVariable: tmp name; genl: ';'.
]

CCodeGenerator storeTemporary: tmp location: loc
[
    self gen: '  '; genVariable: tmp name; gen: '= '; genLocation: loc; genl: ';'.
]

CCodeGenerator storeTemporary: tmp withPrototype: proto
[
    self gen: '  '; genVariable: tmp name; gen: '= '; genVariable: proto name; genl: ';'.
]

CCodeGenerator storePrototype: proto withTemporary: tmp
[
    self gen: '  '; genVariable: proto name; gen: '= '; genVariable: tmp name; genl: ';'.
]

CCodeGenerator loadFree: name scope: scopeTag outer: indir offset: offset location: loc
[
    self gen: '  '; genLocation: loc; gen: '= '; genFreeState: scopeTag outer: indir offset: offset; gen: ';'; comment: name.
]

CCodeGenerator storeFree: name scope: scopeTag outer: indir offset: offset location: loc
[
    self gen: '  '; genFreeState: scopeTag outer: indir offset: offset;	gen: '= '; genLocation: loc; gen: ';'; comment: name.
]

CCodeGenerator loadFreeSlot: name type: type scope: scopeTag outer: indir offset: offset location: loc
[
    self
	gen: '  '; genLocation: loc; gen: '= (('; genStruct: type; gen: ' *)';
	genFreeState: scopeTag outer: indir offset: offset;
	gen: ')->'; genVariable: name; gen: ';'; comment: name.
]

CCodeGenerator storeFreeSlot: name type: type scope: scopeTag outer: indir offset: offset location: loc
[
    self
	gen: '  '; gen: '(('; genStruct: type; gen: ' *)';
	genFreeState: scopeTag outer: indir offset: offset;
	gen: ')->'; genVariable: name; gen: '= '; genLocation: loc; gen: ';'; comment: name.
]

CCodeGenerator genFreeState: scopeTag outer: indir offset: offset
[
    "If INDIR > 0 then the reference is non local: climb up through INDIR outer
     contexts to find a state vector in which the var is stored at OFFSET.
       If INDIR = 0 then SCOPETAG is the tag of a locally-visible state vector
     in which the var is stored at OFFSET."
    indir = 0
	ifTrue:
	   [self genState: scopeTag at: offset]
	ifFalse:
	   [self gen: '((oop *)((struct t_BlockClosure *)'.
	    indir - 1 timesRepeat: [self gen: '((struct t_BlockClosure *)'].
	    self gen: '((struct t_BlockClosure *)v__self)'.
	    indir - 1 timesRepeat: [self gen: '->v_outer)'].
	    self gen: '->v_state))['; print: offset; gen: ']'.].
]

"messaging: send and return"

CCodeGenerator genReturn: node
[
    self gen: '  '; gen: 'return '; genLocation: node location; genl: ';'.
]

CCodeGenerator genNonLocalReturn: node
[
    self gen: '  '; gen: 'return _libid->nlreturn(((struct t_BlockClosure *)v__self)->v__nlr, '; genLocation: node location; genl: ');'.
]

CCodeGenerator send: selector to: receiver withArguments: arguments forValue: valueFlag supered: superedType
[
    self gen: '  '.
    valueFlag ifTrue: [self genLocation: receiver location; gen: '='].
    superedType isNil
	ifTrue:  [self gen: '_sendv(']
	ifFalse: [self gen: '_superv('; genVariable: superedType; gen: ', '].
    self genSelector: selector; gen: ', '; print: 1 + arguments size; gen: ', '; genLocation: receiver location.
    arguments do: [:arg | self gen: ', '; genLocation: arg location].
    self genl: ');'.
]

"runtime support"

CCodeGenerator import: name
[
    self
	gen: '  ';
	gen: '_sendv('; genSelector: '_import:'; gen: ', 3, ';
	gen: '_libid->_object'; gen: ', "';
	gen: name; gen: '", "';
	gen: '__id__init__'; gen: (encoder mangleSelector: name);
	genl: '");'.
]

"types"

CCodeGenerator declareType: typeNode
[
    self
	genStruct: typeNode name; genl: ' {';
	genl: '  struct _vtable *_vtable[0];'.
    typeNode slots do: [:slot | self gen: '  oop '; genVariable: slot; genl: ';'].
    self genl: '};'.
]

CCodeGenerator defineType: typeNode
[
    self gen: 'static oop '; genVariable: typeNode name; genl: '= 0;'.
]

CCodeGenerator implementType: typeNode
[
    | name |
    name := typeNode name.
    self
	gen: 'static size_t '; genType: name method: '_sizeof'; gen: '(oop _closure, oop '; genVariable: 'self'; gen: ') {';
	gen: ' return sizeof('; genStruct: name; genl: '); }';
	gen: 'static char *'; genType: name method: '_debugName'; gen: '(oop _closure, oop '; genVariable: 'self'; gen: ') {';
	gen: ' return "'; gen: name; genl: '"; }';
	gen: 'static struct __slotinfo *'; genType: name method: '_slots'; gen: '(oop _closure, oop '; genVariable: 'self'; gen: ') {';
	gen: ' static struct __slotinfo info[]= {'.
    typeNode slots doWithIndex: [:slot :index | self gen: ' { "', slot, '", '; gen: (index - 1 * 4) printString; gen: ', 4 },'].
    self
	genl: ' { 0, 0, 0 } };  return &info[0]; }'.
]

CCodeGenerator initialiseExternal: typeName
[
    self gen: '  '; genVariable: typeName; gen: '= _libid->import("'; gen: typeName; genl: '");'.
]

CCodeGenerator initialiseType: typeName in: baseName
[
    self gen: '  '; genVariable: typeName; gen: '= _libid->proto2('.
    baseName isNil ifTrue: [self gen: '0'] ifFalse: [self genVariable: baseName].
    self
	gen:  ', '; genType: typeName method: '_sizeof'; gen: '(0, 0)';
	genl: ');'.
    self
	gen: '  _libid->method('; genVariable: typeName; gen: ', '; genSelector: '_sizeof';
	gen: ', (_imp_t)'; genType: typeName method: '_sizeof'; genl: ');';
	gen: '  _libid->method('; genVariable: typeName; gen: ', '; genSelector: '_debugName';
	gen: ', (_imp_t)'; genType: typeName method: '_debugName'; genl: ');';
	gen: '  _libid->method('; genVariable: typeName; gen: ', '; genSelector: '_slots';
	gen: ', (_imp_t)'; genType: typeName method: '_slots'; genl: ');';
	gen: '  _libid->export("'; gen: typeName; gen: '", '; genVariable: typeName; genl: ');'.
]

"globals"

CCodeGenerator defineVariable: definitionNode
[
    self gen: 'static oop '; genVariable: definitionNode name; genl: '= 0;'.
]

CCodeGenerator initialiseVariable: varName
[
    self
	gen: '  '; genVariable: varName; genl: '= 0;';
	gen: '  _libid->export("'; gen: varName; gen: '", '; genVariable: varName; genl: ');'.
]

CCodeGenerator initialiseVariable: varName location: loc
[
    self
	gen: '  '; genVariable: varName; gen: '= '; genLocation: loc; genl: ';';
	gen: '  _libid->export("'; gen: varName; gen: '", '; genVariable: varName; genl: ');'.
]

"sequences: methods and blocks"

CCodeGenerator beginBlock: blockNode in: methodNode arguments: arguments variadic: variadic
[
    self
	gen:  'static struct __methodinfo __info'; print: blockNode tag; gen: '= { ';
	gen:  '"[] ';	 gen:   (methodNode ifTrue: [methodNode selector ] ifFalse: ['?']);
	gen:  '", "';    gen:   (methodNode ifTrue: [methodNode type name] ifFalse: ['?']);
	gen:  '", "';    gen:   blockNode position file escaped;
	gen:  '", ';     gen:   '0';
	gen:   ', ';     print: (methodNode ifTrue: [methodNode position line] ifFalse: [0]);
	gen:   ', ';     print: (methodNode ifTrue: [methodNode sourceEnd]     ifFalse: [0]);
	gen:   ', ';     gen:   (lastInfoTag ifTrue: ['&__info', lastInfoTag printString] ifFalse: ['0']);
	genl: ' };'.
    lastInfoTag := blockNode tag.
    firstInfoTag ifFalse: [firstInfoTag := lastInfoTag].
    self gen: 'static oop '; genBlock: blockNode tag; gen: '(oop v__closure, oop v__self'.
    arguments do: [:arg | self gen: ', oop '; genVariable: arg name].
    variadic ifTrue: [self gen: ', ...'].
    self genl: ')'.
]

CCodeGenerator beginMethod: methodNode in: typeNode arguments: arguments variadic: variadic sequence: sequenceNumber
[
    self
	gen:  'static struct __methodinfo __info'; print: methodNode tag; gen: '= { ';
	gen:     '"';	 gen:   methodNode selector;
	gen:  '", "';    gen:   methodNode type name;
	gen:  '", "';    gen:   methodNode position file escaped;
	gen:  '", ';     gen:   '0';
	gen:   ', ';     print: methodNode position line;
	gen:   ', ';     print: methodNode sourceEnd;
	gen:   ', '.
    lastInfoTag
	ifTrue:  [self gen: '&__info'; print: lastInfoTag]
	ifFalse: [self gen: '0'].
    self genl: ' };'.
    lastInfoTag := methodNode tag.
    firstInfoTag ifFalse: [firstInfoTag := lastInfoTag].
    self gen: 'static oop '; genType: typeNode name sequence: sequenceNumber method: methodNode selector; gen: '(oop v__closure'.
    arguments do: [:arg | self gen: ', oop '; genVariable: arg name].
    variadic ifTrue: [self gen: ', ...'].
    self genl: ')'.
]

CCodeGenerator debugMethod: method		[ self gen:  '  _enter(&__info'; print: method tag; genl: ');' ]
CCodeGenerator debugLine:   position		[ self gen:  '  _line('; print: position line; genl: ');' ]
CCodeGenerator debugReturn: method		[ self genl: '  _leave();' ]
CCodeGenerator debugBlock: block in: method	[ self gen:  '  _enter(&__info'; print: block tag; genl: ');' ]

CCodeGenerator beginSequence: sequenceNode	[ self genl: ' {' ]
CCodeGenerator endSequence: sequenceNode	[ self genl: ' }' ]

CCodeGenerator createStateVector: size inScope: scopeTag constructor: constructor
[
    self
	gen: '  '; gen: 'oop _state'; print: scopeTag; gen: '= _sendv(';
	genSelector: constructor value; gen: ', 2, ';
	genVariable: constructor key; gen: ', ';
	print: size + 1; genl: ');'.
]

CCodeGenerator genState: scopeTag		[ self gen: '((oop *)_state'; print: scopeTag; gen: ')' ]
CCodeGenerator genState: scopeTag at: offset	[ self genState: scopeTag; gen: '['; print: offset; gen: ']' ]

CCodeGenerator declareVariadic: arg
[
    self gen: '  '; genl: 'va_list ap;'.
    self gen: '  va_start(ap, '; genVariable: arg name; genl: ');'.
]

CCodeGenerator endVariadic
[
    self genl: '  va_end(ap);'.
]

CCodeGenerator declareTemporary: tmp
[
    self gen: '  '; gen: 'oop '; genVariable: tmp name; genl: '= 0;'.
]

CCodeGenerator declareStack: size
[
    1 to: size do: [:index | self gen: '  oop '; genLocation: index; genl: '= 0;'].
]

CCodeGenerator declareNonLocalReturn
[
    self gen: '  '; genl: 'jmp_buf __nlr;'.
    self gen: '  '; genl: 'oop _nlr;'.
]

CCodeGenerator defineTemporary: tmp
[
    self gen: '  '; gen: '(void)'; genVariable: tmp name; genl: ';'.
]

CCodeGenerator defineVariadic: arg
[
    self gen: '  '; genVariable: 'nextArgument'; genl: '= (oop)&ap;'.
    self gen: '  '; gen: 'va_start(ap, '; genVariable: arg name; genl: ');'.
]

CCodeGenerator defineNonLocalReturn
[
    self gen: '  '; genl: '_nlr= (oop)&__nlr;'.
    self gen: '  '; genl: 'if (setjmp(__nlr)) { return _libid->nlresult(); }'.
]

CCodeGenerator defineStack: size []

CCodeGenerator saveArgument: var
[
    self gen: '  '; genState: var scope tag at: var offset; gen: '= '; genVariable: var name; genl: ';'.
]

CCodeGenerator initialiseMethod: selector in: typeNode sequence: sequenceNumber
[
    self
	gen: '  _libid->method('; genVariable: typeNode name;
	gen: ', '; genSelector: selector;
	gen: ', (_imp_t)'; genType: typeNode name sequence: sequenceNumber method: selector;
	genl: ');'.
]

"control flow: labels and jumps"

CCodeGenerator pushLabel		[ ^nextLabel := nextLabel + 1 ]
CCodeGenerator defineLabel: label	[ self gen: ' '; genLabel: label; genl: ':;' ]
CCodeGenerator popLabel			[]
CCodeGenerator popLabels: count		[]

CCodeGenerator jumpTo: label		[ self gen: '  ';                                 gen:   'goto '; genLabel: label; genl: ';' ]
CCodeGenerator jumpFalse: loc to: label	[ self gen: '  '; gen: 'if (!'; genLocation: loc; gen: ') goto '; genLabel: label; genl: ';' ]
CCodeGenerator jumpTrue: loc to: label	[ self gen: '  '; gen: 'if (' ; genLocation: loc; gen: ') goto '; genLabel: label; genl: ';' ]

"special and tagged arithmetic operations"

CCodeGenerator compare: loc1 identical: loc2 location: loc
[
    self gen: '  '; genLocation: loc; gen: '= ('; genLocation: loc1; gen: ' == '; genLocation: loc2; genl: ') ? v_true : v_false;'.
]

CCodeGenerator compare: loc1 notIdentical: loc2 location: loc
[
    self gen: '  '; genLocation: loc; gen: '= ('; genLocation: loc1; gen: ' != '; genLocation: loc2; genl: ') ? v_true : v_false;'.
]

CCodeGenerator checkTags: check with: lhs with: rhs
[
    self gen: '(1'.
    (check == #left  or: [check == #both]) ifTrue: [self gen: ' & (long)'; genLocation: lhs].
    (check == #right or: [check == #both]) ifTrue: [self gen: ' & (long)'; genLocation: rhs].
    self gen: ')'.
]

CCodeGenerator tagged: rcv add: arg location: loc checking: tagCheck
[
    self
	genl: '  {';
	gen:  '    int _l= (long)'; genLocation: rcv; genl: ' >> 1;';
	gen:  '    int _r= (long)'; genLocation: arg; genl: ' >> 1;';
	genl: '    int _s= _l + _r;';
	gen:  '    if ('; checkTags: tagCheck with: rcv with: arg; gen: ' && ((_s ^ (_s << 1)) >= 0))';
	gen:       '  '; genLocation: loc; gen: '= (oop)(long)(_s << 1 | 1);';
	gen:  '  else '; genLocation: loc; gen: '= ';
	gen:       '_sendv('; genSelector: '+'; gen: ', 2, '; genLocation: rcv; gen: ', '; genLocation: arg; genl: ');';
	genl: '  }'
]

CCodeGenerator tagged: rcv sub: arg location: loc checking: tagCheck
[
    self
	genl: '  {';
	gen:  '    int _l= (long)'; genLocation: rcv; genl: ' >> 1;';
	gen:  '    int _r= (long)'; genLocation: arg; genl: ' >> 1;';
	genl: '    int _s= (_l - _r);';
	gen:  '    if ('; checkTags: tagCheck with: rcv with: arg; gen: ' && ((_s ^ (_s << 1)) >= 0))';
	gen:       '  '; genLocation: loc; gen: '= (oop)(long)(_s << 1 | 1);';
	gen:  '  else '; genLocation: loc; gen: '= ';
	gen:       '_sendv('; genSelector: '-'; gen: ', 2, '; genLocation: rcv; gen: ', '; genLocation: arg; genl: ');';
	genl: '  }'
]

CCodeGenerator tagged: rcv op: operator selector: sel with: arg location: loc checking: tagCheck
[

    self
	gen: '  '; gen: 'if '; checkTags: tagCheck with: rcv with: arg; genl: ' {';
	gen: '  '; gen: '  '; genLocation: loc; gen: '= (oop)(((((long)'; genLocation: rcv; gen:  '>> 1) ';
	gen:                                   operator; gen: ' ((long)'; genLocation: arg; genl: '>> 1)) << 1) | 1);';
	gen: '  '; gen: '} else '; genLocation: loc;
	gen: '= _sendv('; genSelector: sel; gen: ', 2, '; genLocation: rcv; gen: ', '; genLocation: arg; genl: ');'.
]

CCodeGenerator tagged: rcv mul: arg location: loc checking: tagCheck
[
"
    self tagged: rcv op: '*' selector: '*' with: arg location: loc checking: tagCheck
"
    self
	genl: '  {';
	gen:  '    int _l= (long)'; genLocation: rcv; genl: ' >> 1;';
	gen:  '    int _r= (long)'; genLocation: arg; genl: ' >> 1;';
	genl: '    int _s= (_l * _r);';
	gen:  '    if ('; checkTags: tagCheck with: rcv with: arg;
	gen:         ' && ((_r == 0) || (_s / _r == _l))';
	gen:         ' && ((_s ^ (_s << 1)) >= 0))';
	gen:       '  '; genLocation: loc; gen: '= (oop)(long)(_s << 1 | 1);';
	gen:  '  else '; genLocation: loc; gen: '= ';
	gen:       '_sendv('; genSelector: '*'; gen: ', 2, '; genLocation: rcv; gen: ', '; genLocation: arg; genl: ');';
	genl: '  }'
]

CCodeGenerator tagged: rcv div: arg location: loc checking: tagCheck
[
"
    self tagged: rcv op: '/' selector: '//' with: arg location: loc checking: tagCheck
"
    self
	gen:  '  '; genLocation: loc; gen: '= ';
	gen:  '_sendv('; genSelector: '//'; gen: ', 2, '; genLocation: rcv; gen: ', '; genLocation: arg; genl: ');'
]

CCodeGenerator tagged: rcv mod: arg location: loc checking: tagCheck
[
"
    self tagged: rcv op: '%' selector: '\\\\' with: arg location: loc checking: tagCheck
"
    self
	gen: '  '; genLocation: loc; gen: '= ';
	gen: '_sendv('; genSelector: '\\\\'; gen: ', 2, '; genLocation: rcv; gen: ', '; genLocation: arg; genl: ');'
]

CCodeGenerator tagged: rcv and: arg location: loc checking: tagCheck
[
    self
	gen: '  '; gen: 'if ('; checkTags: tagCheck with: rcv with: arg;
	gen:                ' && ('; genLocation: rcv; gen: ' > 0)';
	gen:                ' && ('; genLocation: arg; genl: ' > 0)) {';
	gen: '  '; gen: '  '; genLocation: loc; gen: '= (oop)((long)'; genLocation: rcv; gen: ' & (long)'; genLocation: arg; genl: ');';
	gen: '  '; gen: '} else '; genLocation: loc;
	gen: '= _sendv('; genSelector: 'bitAnd:'; gen: ', 2, '; genLocation: rcv; gen: ', '; genLocation: arg; genl: ');'.
]

CCodeGenerator tagged: rcv or: arg location: loc checking: tagCheck
[
    self
	gen: '  '; gen: 'if ('; checkTags: tagCheck with: rcv with: arg;
	gen:                ' && ('; genLocation: rcv; gen: ' > 0)';
	gen:                ' && ('; genLocation: arg; genl: ' > 0)) {';
	gen: '  '; gen: '  '; genLocation: loc; gen: '= (oop)((long)'; genLocation: rcv; gen: ' | (long)'; genLocation: arg; genl: ');';
	gen: '  '; gen: '} else '; genLocation: loc;
	gen: '= _sendv('; genSelector: 'bitOr:'; gen: ', 2, '; genLocation: rcv; gen: ', '; genLocation: arg; genl: ');'.
]

CCodeGenerator tagged: rcv xor: arg location: loc checking: tagCheck
[
    self
	gen: '  '; gen: 'if ('; checkTags: tagCheck with: rcv with: arg;
	gen:                ' && ('; genLocation: rcv; gen: ' > 0)';
	gen:                ' && ('; genLocation: arg; genl: ' > 0)) {';
	gen: '  '; gen: '  '; genLocation: loc; gen: '= (oop)(((long)'; genLocation: rcv; gen: ' ^ (long)'; genLocation: arg; genl: ') | 1);';
	gen: '  '; gen: '} else '; genLocation: loc;
	gen: '= _sendv('; genSelector: 'bitXor:'; gen: ', 2, '; genLocation: rcv; gen: ', '; genLocation: arg; genl: ');'.
]

CCodeGenerator tagged: rcv shift: arg location: loc checking: tagCheck
[
    self
	gen:  '  { int _l= (long)'; genLocation: rcv; gen: ' >> 1, ';
	gen:         ' _r= (long)'; genLocation: arg; gen: ' >> 1, ';
	genl:        ' _s= ((_r < 0) ? (_l >> -_r) : (_l << _r));';
	gen:  '    if ('; checkTags: tagCheck with: rcv with: arg;
	gen:          ' && (   (    (_r >= 0) && (_r <= 31) ';
	gen:                   ' && (_l == (_s >> _r))';
	gen:                   ' && ((_s ^ (_s << 1)) >= 0) )';
	gen:              ' || ((_r < 0) && (_r >= -31)) )';
	gen:         ') '; genLocation: loc; gen: '= (oop)(long)(_s << 1 | 1);';
	gen:  ' else '; genLocation: loc; gen: '= ';
	gen:       '_sendv('; genSelector: 'bitShift:'; gen: ', 2, '; genLocation: rcv; gen: ', '; genLocation: arg; genl: ');';
	genl: '  }'
]

CCodeGenerator tagged: rcv left: arg location: loc checking: tagCheck
[
    self
	genl: '{';
	gen:  '    int _l= (long)'; genLocation: rcv; gen: ' >> 1,';
	gen:         ' _r= (long)'; genLocation: arg; gen: ' >> 1,';
	genl:        ' _s= (_l << _r);';
	gen:  '    if ('; checkTags: tagCheck with: rcv with: arg;
	gen:         ' && (_r >= 0) && (_r <= 31)';
	gen:         ' && (_l == (_s >> _r))';
	gen:         ' && ((_s ^ (_s << 1)) >= 0)';
	gen:         ') '; genLocation: loc; gen: '= (oop)(long)(_s << 1 | 1);';
	gen:  ' else '; genLocation: loc; gen: '= ';
	gen:       '_sendv('; genSelector: '<<'; gen: ', 2, '; genLocation: rcv; gen: ', '; genLocation: arg; genl: ');';
	genl: '  }'
]

CCodeGenerator tagged: rcv right: arg location: loc checking: tagCheck
[
    self
	genl: '  {';
	gen:  '    int _l= (long)'; genLocation: rcv; gen: ' >> 1,';
	gen:         ' _r= (long)'; genLocation: arg; gen: ' >> 1,';
	genl:        ' _s= (_l >> _r);';
	gen:  '    if ('; checkTags: tagCheck with: rcv with: arg;
	gen:         ' && (_r >= 0) && (_r <= 31)';
	gen:         ') '; genLocation: loc; gen: '= (oop)(long)(_s << 1 | 1);';
	gen:  ' else '; genLocation: loc; gen: '= ';
	gen:       '_sendv('; genSelector: '>>'; gen: ', 2, '; genLocation: rcv; gen: ', '; genLocation: arg; genl: ');';
	genl: '  }'
]

CCodeGenerator tagged: rcv rel: operator selector: sel with: arg location: loc checking: tagCheck
[
    self
	gen: '  '; gen: 'if '; checkTags: tagCheck with: rcv with: arg; genl: ' {';
	gen: '  '; gen: '  '; genLocation: loc; gen: '= (((long)'; genLocation: rcv; gen: ' ';
	gen:                             operator; gen: ' (long)'; genLocation: arg;
	gen:              ') ? '; genVariable: 'true'; gen: ' : '; genVariable: 'false'; genl: ');';
	gen: '  '; gen: '} else '; genLocation: loc;
	gen: '= _sendv('; genSelector: sel; gen: ', 2, '; genLocation: rcv; gen: ', '; genLocation: arg; genl: ');'.
]

CCodeGenerator tagged: rcv lt: arg location: loc checking: tagCheck
[
    self tagged: rcv rel: '<' selector: '<' with: arg location: loc checking: tagCheck
]

CCodeGenerator tagged: rcv le: arg location: loc checking: tagCheck
[
    self tagged: rcv rel: '<=' selector: '<=' with: arg location: loc checking: tagCheck
]

CCodeGenerator tagged: rcv eq: arg location: loc checking: tagCheck
[
    self tagged: rcv rel: '==' selector: '=' with: arg location: loc checking: tagCheck
]

CCodeGenerator tagged: rcv ne: arg location: loc checking: tagCheck
[
    self tagged: rcv rel: '!=' selector: '~=' with: arg location: loc checking: tagCheck
]

CCodeGenerator tagged: rcv ge: arg location: loc checking: tagCheck
[
    self tagged: rcv rel: '>=' selector: '>=' with: arg location: loc checking: tagCheck
]

CCodeGenerator tagged: rcv gt: arg location: loc checking: tagCheck
[
    self tagged: rcv rel: '>' selector: '>' with: arg location: loc checking: tagCheck
]
