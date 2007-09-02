/* generated by Id 1.0 at 2007-09-02 14:34:59 Z */
/* with the command: -I../stage1/ -I../st80 -c ParseNode.st -o ../stage2/ParseNode.o.c */

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <setjmp.h>
#include <string.h>
#include <ctype.h>
#include <fcntl.h>
#include <unistd.h>
#include <time.h>
#include <sys/time.h>
#include <sys/stat.h>
#include <sys/param.h>
#include <assert.h>
#define GC_DLL 1
#include <gc/gc.h>
#if defined(WIN32)
# include <malloc.h>
# include <windows.h>
# include <winbase.h>
  typedef HINSTANCE dlhandle_t;
# define dlopen(path, mode)	LoadLibrary(path)
# define dlsym(handle, name)	((void *)GetProcAddress(handle, name))
# define dlclose(handle)	FreeLibrary(handle)
#else
# include <dlfcn.h>
  typedef void *dlhandle_t;
#endif
#ifndef O_BINARY
# define O_BINARY 0
#endif

typedef struct t__object *oop;

typedef oop (*_imp_t)(oop _thunk, oop receiver, ...);

struct __closure
{
  _imp_t method;
  oop	 data;
};

static void              *(*_local_param   )(int index)= 0;
static oop  		  (*_local_intern  )(const char *string)= 0;
static oop  		  (*_local_proto   )(oop base)= 0;
static oop  		  (*_local_import  )(const char *name)= 0;
static oop  		  (*_local_export  )(const char *name, oop value)= 0;
static void 		  (*_local_method  )(oop type, oop selector, _imp_t method)= 0;
static oop  		  (*_local_alloc   )(oop type, size_t size)= 0;
static oop  		 *(*_local_palloc  )(size_t size)= 0;
static void  		 *(*_local_balloc  )(size_t size)= 0;
static struct __closure  *(*_local_bind    )(oop selector, oop receiver)= 0;
static oop                (*_local_nlreturn)(oop nlr, oop result)= 0;
static oop                (*_local_nlresult)(void)= 0;
static oop  		    _local_object= 0;
static oop  		   *_local_tag_vtable= 0;
static oop  		   *_local_nil_vtable= 0;
static void               (*_local_gc_addRoots)(char *lo, char *hi)= 0;
static void	          (*_local_gc_unregisterDisappearingLink)(void *ptr)= 0;
static void		  (*_local_gc_generalRegisterDisappearingLink)(void *link, void *ptr)= 0;
static void		  (*_local_gc_gcollect)(void)= 0;
static void		 *(*_local_enter)(char *name, char *type, char *file)= 0;
static void		  (*_local_line)(int line)= 0;
static void		  (*_local_leave)(void *)= 0;
static char		 *(*_local_backtrace)(void)= 0;

#define _param(INDEX)		_local_param(INDEX)
#define _selector(NAME)		_local_intern(NAME)
#define _proto(BASE)		_local_proto(BASE)
#define _id_import(NAME)	_local_import(NAME)
#define _id_export(NAME, VAL)	_local_export((NAME), (VAL))
#define _method(TYPE, SEL, IMP)	_local_method((TYPE), (SEL), (_imp_t)(IMP))
#define _alloc(RCV, LBS)	_local_alloc((RCV), (LBS))
#define _palloc(LBS)		_local_palloc((LBS))
#define _balloc(LBS)		_local_balloc((LBS))
#define _nlreturn(NLR, ARG)	_local_nlreturn((NLR), (ARG))
#define _nlresult()		_local_nlresult()
#define _backtrace()		_local_backtrace()
#ifdef ID_DEBUG
# define _enter(NM, TYPE, FILE)	void *__id_debug= _local_enter(NM, TYPE, FILE)
# define _line(line)		_local_line(line)
# define _leave()		_local_leave(__id_debug)
#else
# define _enter(NM, TYPE, FILE)
# define _line(line)
# define _leave()
#endif
#define _return			_leave(); return

#define _send(MSG, RCV, ARG...) ({					\
  register oop _r= (RCV);						\
  struct __closure *_c= (struct __closure *)_local_bind((MSG), _r);	\
  (_c->method)((oop)_c, _r, _r, ##ARG);					\
})

#define _super(TYP, MSG, RCV, ARG...) ({				\
  register oop _r= (RCV);						\
  struct __closure *_c= (struct __closure *)_local_bind((MSG), (TYP));	\
  (_c->method)((oop)_c, _r, _r, ##ARG);					\
})

static oop s_position= 0;
static oop s_location= 0;
static oop s_withPosition_= 0;
static oop s__5fdebugName= 0;
static oop s_size_5f_value_5f_= 0;
static oop s_new= 0;
static oop s__5fimport_= 0;
static oop s_printString= 0;
static oop s_printIndent_= 0;
static oop s_timesRepeat_= 0;
static oop s_print= 0;
static oop s_function_5f_arity_5f_= 0;
static oop s_println_= 0;
static oop s_initialize= 0;
static oop s__2c= 0;
static oop s_error_= 0;
static oop s_location_= 0;
static oop s__5fsizeof= 0;
static oop s_println= 0;
static struct _Selector { const char *name; oop *addr; } _Selectors[]= {
  { "position", &s_position },
  { "location", &s_location },
  { "withPosition:", &s_withPosition_ },
  { "_debugName", &s__5fdebugName },
  { "size_:value_:", &s_size_5f_value_5f_ },
  { "new", &s_new },
  { "_import:", &s__5fimport_ },
  { "printString", &s_printString },
  { "printIndent:", &s_printIndent_ },
  { "timesRepeat:", &s_timesRepeat_ },
  { "print", &s_print },
  { "function_:arity_:", &s_function_5f_arity_5f_ },
  { "println:", &s_println_ },
  { "initialize", &s_initialize },
  { ",", &s__2c },
  { "error:", &s_error_ },
  { "location:", &s_location_ },
  { "_sizeof", &s__5fsizeof },
  { "println", &s_println },
  { 0, 0 }
};
struct t__object {
  struct _vtable *_vtable[0];
};
struct t__selector {
  struct _vtable *_vtable[0];
  oop v__size;
  oop v__elements;
};
struct t__assoc {
  struct _vtable *_vtable[0];
  oop v_key;
  oop v_value;
};
struct t__closure {
  struct _vtable *_vtable[0];
  oop v__method;
  oop v_data;
};
struct t__vector {
  struct _vtable *_vtable[0];
  oop v__size;
};
struct t__vtable {
  struct _vtable *_vtable[0];
  oop v__tally;
  oop v_bindings;
  oop v_delegate;
};
struct t_Object {
  struct _vtable *_vtable[0];
};
struct t_UndefinedObject {
  struct _vtable *_vtable[0];
};
struct t_StaticBlockClosure {
  struct _vtable *_vtable[0];
  oop v__function;
  oop v__arity;
};
struct t_BlockClosure {
  struct _vtable *_vtable[0];
  oop v__function;
  oop v__arity;
  oop v_outer;
  oop v_state;
  oop v__nlr;
};
struct t_Magnitude {
  struct _vtable *_vtable[0];
};
struct t_Character {
  struct _vtable *_vtable[0];
  oop v_value;
};
struct t_Number {
  struct _vtable *_vtable[0];
};
struct t_Fraction {
  struct _vtable *_vtable[0];
  oop v_numerator;
  oop v_denominator;
};
struct t_Float {
  struct _vtable *_vtable[0];
};
struct t_Integer {
  struct _vtable *_vtable[0];
};
struct t_SmallInteger {
  struct _vtable *_vtable[0];
};
struct t_LargePositiveInteger {
  struct _vtable *_vtable[0];
  oop v_bytes;
};
struct t_LargeNegativeInteger {
  struct _vtable *_vtable[0];
  oop v_bytes;
};
struct t_Collection {
  struct _vtable *_vtable[0];
};
struct t_SequenceableCollection {
  struct _vtable *_vtable[0];
};
struct t_ArrayedCollection {
  struct _vtable *_vtable[0];
  oop v_size;
};
struct t_Array {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__pointers;
};
struct t_ImmutableArray {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__pointers;
};
struct t_WordArray {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__words;
};
struct t_ImmutableWordArray {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__words;
};
struct t_ByteArray {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__bytes;
};
struct t_ImmutableByteArray {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__bytes;
};
struct t_String {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__bytes;
};
struct t_ImmutableString {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__bytes;
};
struct t_Symbol {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__bytes;
};
struct t_nil {
  struct _vtable *_vtable[0];
};
struct t_true {
  struct _vtable *_vtable[0];
};
struct t_false {
  struct _vtable *_vtable[0];
};
struct t_CharacterTable {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__pointers;
};
struct t_ParseNode {
  struct _vtable *_vtable[0];
  oop v_position;
  oop v_location;
};
static oop l_1= 0;
static oop l_2= 0;
static oop l_4= 0;
static oop l_3= 0;
static oop v__object= 0;
static oop v_Object= 0;
static oop v_UndefinedObject= 0;
static oop v_StaticBlockClosure= 0;
static oop v_Magnitude= 0;
static oop v_Number= 0;
static oop v_Integer= 0;
static oop v_LargePositiveInteger= 0;
static oop v_Collection= 0;
static oop v_SequenceableCollection= 0;
static oop v_ArrayedCollection= 0;
static oop v_Array= 0;
static oop v_WordArray= 0;
static oop v_ByteArray= 0;
static oop v_String= 0;
static oop v_ImmutableString= 0;
static oop v_nil= 0;
static oop v_ParseNode= 0;
static size_t ParseNode___5fsizeof(oop _closure, oop v_self) { return sizeof(struct t_ParseNode); }
static char *ParseNode___5fdebugName(oop _closure, oop v_self) { return "ParseNode"; }
static oop ParseNode__withPosition_(oop v__closure, oop v_stateful_self, oop v_self, oop v_aPosition)
 {
  _enter("withPosition:", "ParseNode", "/home/piumarta/src/idst/object/idc/ParseNode.st");
  oop _1= 0;
  _line(27);
  _1= v_self;
  _line(29);
  _1=_super(v_Object, s_new, _1);
  v_self= _1;
  v_stateful_self= _1;
  _1= v_aPosition;
  ((struct t_ParseNode *)v_stateful_self)->v_position= _1;
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static oop ParseNode__initialize(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter("initialize", "ParseNode", "/home/piumarta/src/idst/object/idc/ParseNode.st");
  oop _1= 0;
  _line(33);
  _1= v_self;
  _line(35);
  _1=_super(v_Object, s_initialize, _1);
  _1= v_nil;
  ((struct t_ParseNode *)v_stateful_self)->v_location= _1;
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static oop ParseNode__new(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter("new", "ParseNode", "/home/piumarta/src/idst/object/idc/ParseNode.st");
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  _line(39);
  _1= v_self;
  _2= l_1;
  _3= v_self;
  _line(41);
  _3=_send(s_printString, _3);
  _line(41);
  _2=_send(s__2c, _2, _3);
  _3= l_2;
  _line(41);
  _2=_send(s__2c, _2, _3);
  _line(41);
  _1=_send(s_error_, _1, _2);
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static oop ParseNode__location_(oop v__closure, oop v_stateful_self, oop v_self, oop v_aLocation)
 {
  _enter("location:", "ParseNode", "/home/piumarta/src/idst/object/idc/ParseNode.st");
  oop _1= 0;
  _line(44);
  _1= v_aLocation;
  ((struct t_ParseNode *)v_stateful_self)->v_location= _1;
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static oop ParseNode__position(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter("position", "ParseNode", "/home/piumarta/src/idst/object/idc/ParseNode.st");
  oop _1= 0;
  _line(49);
  _1= ((struct t_ParseNode *)v_stateful_self)->v_position;
  _leave();
  return _1;
  _leave();
 }
static oop ParseNode__location(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter("location", "ParseNode", "/home/piumarta/src/idst/object/idc/ParseNode.st");
  oop _1= 0;
  _line(50);
  _1= ((struct t_ParseNode *)v_stateful_self)->v_location;
  _leave();
  return _1;
  _leave();
 }
static oop b_3(oop v__closure, oop v__self)
 {
  _enter("[]", "?", "/home/piumarta/src/idst/object/idc/ParseNode.st");
  oop _1= 0;
  _line(54);
  _1= l_4;
  _line(54);
  _1=_send(s_print, _1);
  _leave();
  return _1;
  _leave();
 }
static oop ParseNode__printIndent_(oop v__closure, oop v_stateful_self, oop v_self, oop v_indent)
 {
  _enter("printIndent:", "ParseNode", "/home/piumarta/src/idst/object/idc/ParseNode.st");
  oop _1= 0;
  oop _2= 0;
  _line(52);
  _1= v_indent;
  _2= l_3;
  _line(54);
  _1=_send(s_timesRepeat_, _1, _2);
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static oop ParseNode__println_(oop v__closure, oop v_stateful_self, oop v_self, oop v_indent)
 {
  _enter("println:", "ParseNode", "/home/piumarta/src/idst/object/idc/ParseNode.st");
  oop _1= 0;
  oop _2= 0;
  _line(57);
  _1= v_self;
  _2= v_indent;
  _line(59);
  _1=_send(s_printIndent_, _1, _2);
  _1= v_self;
  _line(60);
  _1=_send(s_println, _1);
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }

void __id__init__ParseNode(void)
{
  if (_local_object) return;
  { 
    dlhandle_t global= dlopen(0, RTLD_LAZY);
    _local_object= *(oop *)dlsym(global, "_libid_object");
    _local_param= dlsym(global, "_libid_param");
    _local_intern= dlsym(global, "_libid_intern");
    _local_proto= dlsym(global, "_libid_proto");
    _local_import= dlsym(global, "_libid_import");
    _local_export= dlsym(global, "_libid_export");
    _local_method= dlsym(global, "_libid_method");
    _local_alloc= dlsym(global, "_libid_alloc");
    _local_palloc= dlsym(global, "_libid_palloc");
    _local_balloc= dlsym(global, "_libid_balloc");
    _local_bind= dlsym(global, "_libid_bind");
    _local_nlreturn= dlsym(global, "_libid_nlreturn");
    _local_nlresult= dlsym(global, "_libid_nlresult");
    _local_enter= dlsym(global, "_libid_enter");
    _local_line= dlsym(global, "_libid_line");
    _local_leave= dlsym(global, "_libid_leave");
    _local_backtrace= dlsym(global, "_libid_backtrace");
    _local_tag_vtable= dlsym(global, "_libid_tag_vtable");
    _local_nil_vtable= dlsym(global, "_libid_nil_vtable");
    _local_gc_addRoots= dlsym(global, "GC_add_roots");
    _local_gc_unregisterDisappearingLink= dlsym(global, "GC_unregister_disappearing_link");
    _local_gc_generalRegisterDisappearingLink= dlsym(global, "GC_general_register_disappearing_link");
    _local_gc_gcollect= dlsym(global, "GC_gcollect");
    dlclose(global);
  }
# define GC_add_roots _local_gc_addRoots
  GC_INIT();
  {
    struct _Selector *s= 0;
    for (s= _Selectors;  s->name;  ++s)
      *s->addr= _selector(s->name);
  }
  _enter("__id__init__", "<initialisation>", "ParseNode.st");

  _send(s__5fimport_, _local_object, "Object", "__id__init__Object");
  _send(s__5fimport_, _local_object, "_object", "__id__init___5fobject");
  v__object= _id_import("_object");
  v_Object= _id_import("Object");
  v_UndefinedObject= _id_import("UndefinedObject");
  v_StaticBlockClosure= _id_import("StaticBlockClosure");
  v_Magnitude= _id_import("Magnitude");
  v_Number= _id_import("Number");
  v_Integer= _id_import("Integer");
  v_LargePositiveInteger= _id_import("LargePositiveInteger");
  v_Collection= _id_import("Collection");
  v_SequenceableCollection= _id_import("SequenceableCollection");
  v_ArrayedCollection= _id_import("ArrayedCollection");
  v_Array= _id_import("Array");
  v_WordArray= _id_import("WordArray");
  v_ByteArray= _id_import("ByteArray");
  v_String= _id_import("String");
  v_ImmutableString= _id_import("ImmutableString");
  v_nil= _id_import("nil");
  _send(s__5fimport_, _local_object, "BlockClosure", "__id__init__BlockClosure");
  _send(s__5fimport_, _local_object, "SmallInteger", "__id__init__SmallInteger");
  _send(s__5fimport_, _local_object, "Integer", "__id__init__Integer");
  _send(s__5fimport_, _local_object, "Number", "__id__init__Number");
  _send(s__5fimport_, _local_object, "Magnitude", "__id__init__Magnitude");
  _send(s__5fimport_, _local_object, "Array", "__id__init__Array");
  _send(s__5fimport_, _local_object, "ArrayedCollection", "__id__init__ArrayedCollection");
  _send(s__5fimport_, _local_object, "SequenceableCollection", "__id__init__SequenceableCollection");
  _send(s__5fimport_, _local_object, "Collection", "__id__init__Collection");
  _send(s__5fimport_, _local_object, "Character", "__id__init__Character");
  _send(s__5fimport_, _local_object, "String", "__id__init__String");
  _send(s__5fimport_, _local_object, "ByteArray", "__id__init__ByteArray");
  _send(s__5fimport_, _local_object, "WordArray", "__id__init__WordArray");
  v_ParseNode= _proto(v_Object);
  _method(v_ParseNode, s__5fsizeof, ParseNode___5fsizeof);
  _method(v_ParseNode, s__5fdebugName, ParseNode___5fdebugName);
  _id_export("ParseNode", v_ParseNode);
  _method(v_ParseNode, s_withPosition_, ParseNode__withPosition_);
  _method(v_ParseNode, s_initialize, ParseNode__initialize);
  l_1= _send(s_size_5f_value_5f_, v_ImmutableString, 13, "instances of ");
  l_2= _send(s_size_5f_value_5f_, v_ImmutableString, 32, " are created with #withPosition:");
  _method(v_ParseNode, s_new, ParseNode__new);
  _method(v_ParseNode, s_location_, ParseNode__location_);
  _method(v_ParseNode, s_position, ParseNode__position);
  _method(v_ParseNode, s_location, ParseNode__location);
  l_4= _send(s_size_5f_value_5f_, v_ImmutableString, 2, "  ");
  l_3= _send(s_function_5f_arity_5f_, v_StaticBlockClosure, b_3, 0);
  _method(v_ParseNode, s_printIndent_, ParseNode__printIndent_);
  _method(v_ParseNode, s_println_, ParseNode__println_);
  _leave();
}
