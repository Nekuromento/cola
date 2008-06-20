/* generated by Id 1.1 at 2008-06-20 21:43:08 Z */
/* with the command: -I../stage1/ -I../st80 -c Scope.st -o ../stage2/Scope.o.c */

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
  typedef HINSTANCE dlhandle_t;
#else
# include <dlfcn.h>
  typedef void *dlhandle_t;
#endif
#ifndef O_BINARY
# define O_BINARY 0
#endif

typedef struct t__object *oop;

struct __send;
typedef oop (*_imp_t)(struct __send *_send, ...);

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
# define _backtrace()			"(no debugging information)"
#endif
#define _return			_leave(); return

#define _sendv(MSG, N, RCV, ARG...) ({					\
  struct __send _s= { (MSG), (N), (RCV) };				\
  ((_imp_t)(_libid->bindv(&_s)))(&_s, _s.receiver, _s.receiver, ##ARG);	\
})

#define _superv(TYP, MSG, N, RCV, ARG...) ({	\
  struct __send _s= { (MSG), (N), (TYP) };	\
  _imp_t _imp= _libid->bindv(&_s);		\
  _s.receiver= (RCV);				\
  _imp(&_s, _s.receiver, _s.receiver, ##ARG);	\
})

static oop s_hasNLR= 0;
static oop s_closeOver_= 0;
static oop s_tag= 0;
static oop s_outer= 0;
static oop s_hasExports= 0;
static oop s_hasVarargs= 0;
static oop s__5fdebugName= 0;
static oop s_new= 0;
static oop s_stackSize= 0;
static oop s_isFree= 0;
static oop s_notNil= 0;
static oop s_withOuter_= 0;
static oop s_addBlock_= 0;
static oop s_nextOffset= 0;
static oop s__5fsizeof= 0;
static oop s_hasImports= 0;
static oop s_new_5f_= 0;
static oop s_noteNLR= 0;
static oop s_isGlobal= 0;
static oop s_index_= 0;
static oop s_value_5f_= 0;
static oop s__5fimport_= 0;
static oop s_do_= 0;
static oop s_blocks= 0;
static oop s_ifFalse_= 0;
static oop s_initialize= 0;
static oop s__5fslots= 0;
static oop s_ifTrue_= 0;
static oop s__2b= 0;
static oop s_newScope= 0;
static oop s_isNil= 0;
static oop s_scope= 0;
static oop s__3d_3d= 0;
static oop s_add_= 0;
static oop s_increaseLevel= 0;
static oop s_exportState= 0;
static oop s_importState= 0;
static oop s_needsOuterScope= 0;
static oop s_hasVarargs_= 0;
static oop s_stateVectorSize= 0;
static oop s_function_5f_arity_5f_outer_state_nlr_5f_= 0;
static oop s_at_ifAbsent_= 0;
static oop s_encode_from_= 0;
static oop s_function_5f_arity_5f_= 0;
static oop s_stackSize_= 0;
static oop s_freeWithin_= 0;
static oop s_or_= 0;
static oop s_declare_as_position_= 0;
static oop s_withName_position_scope_= 0;
static oop s_declareSlot_position_type_receiver_= 0;
static oop s_type_receiver_= 0;
static oop s_declareArgument_position_= 0;
static oop s_encode_= 0;
static oop s_declareTemporary_position_= 0;
static oop s_at_put_= 0;
static oop s_level= 0;
static struct _Selector { const char *name; oop *addr; } _Selectors[]= {
  { "hasNLR", &s_hasNLR },
  { "closeOver:", &s_closeOver_ },
  { "tag", &s_tag },
  { "outer", &s_outer },
  { "hasExports", &s_hasExports },
  { "hasVarargs", &s_hasVarargs },
  { "_debugName", &s__5fdebugName },
  { "new", &s_new },
  { "stackSize", &s_stackSize },
  { "isFree", &s_isFree },
  { "notNil", &s_notNil },
  { "withOuter:", &s_withOuter_ },
  { "addBlock:", &s_addBlock_ },
  { "nextOffset", &s_nextOffset },
  { "_sizeof", &s__5fsizeof },
  { "hasImports", &s_hasImports },
  { "new_:", &s_new_5f_ },
  { "noteNLR", &s_noteNLR },
  { "isGlobal", &s_isGlobal },
  { "index:", &s_index_ },
  { "value_:", &s_value_5f_ },
  { "_import:", &s__5fimport_ },
  { "do:", &s_do_ },
  { "blocks", &s_blocks },
  { "ifFalse:", &s_ifFalse_ },
  { "initialize", &s_initialize },
  { "_slots", &s__5fslots },
  { "ifTrue:", &s_ifTrue_ },
  { "+", &s__2b },
  { "newScope", &s_newScope },
  { "isNil", &s_isNil },
  { "scope", &s_scope },
  { "==", &s__3d_3d },
  { "add:", &s_add_ },
  { "increaseLevel", &s_increaseLevel },
  { "exportState", &s_exportState },
  { "importState", &s_importState },
  { "needsOuterScope", &s_needsOuterScope },
  { "hasVarargs:", &s_hasVarargs_ },
  { "stateVectorSize", &s_stateVectorSize },
  { "function_:arity_:outer:state:nlr_:", &s_function_5f_arity_5f_outer_state_nlr_5f_ },
  { "at:ifAbsent:", &s_at_ifAbsent_ },
  { "encode:from:", &s_encode_from_ },
  { "function_:arity_:", &s_function_5f_arity_5f_ },
  { "stackSize:", &s_stackSize_ },
  { "freeWithin:", &s_freeWithin_ },
  { "or:", &s_or_ },
  { "declare:as:position:", &s_declare_as_position_ },
  { "withName:position:scope:", &s_withName_position_scope_ },
  { "declareSlot:position:type:receiver:", &s_declareSlot_position_type_receiver_ },
  { "type:receiver:", &s_type_receiver_ },
  { "declareArgument:position:", &s_declareArgument_position_ },
  { "encode:", &s_encode_ },
  { "declareTemporary:position:", &s_declareTemporary_position_ },
  { "at:put:", &s_at_put_ },
  { "level", &s_level },
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
struct t_Set {
  struct _vtable *_vtable[0];
  oop v_tally;
  oop v_array;
};
struct t_LookupKey {
  struct _vtable *_vtable[0];
  oop v_key;
};
struct t_Association {
  struct _vtable *_vtable[0];
  oop v_key;
  oop v_value;
};
struct t_OrderedCollection {
  struct _vtable *_vtable[0];
  oop v_array;
  oop v_firstIndex;
  oop v_lastIndex;
};
struct t_Dictionary {
  struct _vtable *_vtable[0];
  oop v_tally;
  oop v_array;
};
struct t_SlotVariableNode {
  struct _vtable *_vtable[0];
  oop v_name;
  oop v_position;
  oop v_scope;
  oop v_receiver;
  oop v_type;
};
struct t_EncodedVariableNode {
  struct _vtable *_vtable[0];
  oop v_name;
  oop v_position;
  oop v_scope;
  oop v_offset;
};
struct t_LocalVariableNode {
  struct _vtable *_vtable[0];
  oop v_name;
  oop v_position;
  oop v_scope;
  oop v_offset;
  oop v_index;
};
struct t_ArgumentVariableNode {
  struct _vtable *_vtable[0];
  oop v_name;
  oop v_position;
  oop v_scope;
  oop v_offset;
  oop v_index;
  oop v_tied;
};
struct t_TemporaryVariableNode {
  struct _vtable *_vtable[0];
  oop v_name;
  oop v_position;
  oop v_scope;
  oop v_offset;
  oop v_index;
};
struct t_Scope {
  struct _vtable *_vtable[0];
  oop v_tally;
  oop v_array;
  oop v_argumentCount;
  oop v_temporaryCount;
  oop v_stackSize;
  oop v_outer;
  oop v_blocks;
  oop v_tag;
  oop v_level;
  oop v_lastOffset;
  oop v_encodings;
  oop v_exportFlag;
  oop v_importFlag;
  oop v_nlrFlag;
  oop v_hasVarargs;
};
static oop l_2= 0;
static oop l_4= 0;
static oop l_13= 0;
static oop l_16= 0;
static oop l_27= 0;
static oop l_29= 0;
static oop l_31= 0;
static oop l_38= 0;
static oop l_40= 0;
static oop v__object= 0;
static oop v__vector= 0;
static oop v_Object= 0;
static oop v_UndefinedObject= 0;
static oop v_StaticBlockClosure= 0;
static oop v_BlockClosure= 0;
static oop v_Magnitude= 0;
static oop v_Number= 0;
static oop v_Integer= 0;
static oop v_SmallInteger= 0;
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
static oop v_true= 0;
static oop v_false= 0;
static oop v_Set= 0;
static oop v_LookupKey= 0;
static oop v_OrderedCollection= 0;
static oop v_Dictionary= 0;
static oop v_SlotVariableNode= 0;
static oop v_EncodedVariableNode= 0;
static oop v_LocalVariableNode= 0;
static oop v_ArgumentVariableNode= 0;
static oop v_TemporaryVariableNode= 0;
static oop v_Scope= 0;
static size_t Scope___5fsizeof(oop _closure, oop v_self) { return sizeof(struct t_Scope); }
static char *Scope___5fdebugName(oop _closure, oop v_self) { return "Scope"; }
static struct __slotinfo *Scope___5fslots(oop _closure, oop v_self) { static struct __slotinfo info[]= { { "tally", 0, 4 }, { "array", 4, 4 }, { "argumentCount", 8, 4 }, { "temporaryCount", 12, 4 }, { "stackSize", 16, 4 }, { "outer", 20, 4 }, { "blocks", 24, 4 }, { "tag", 28, 4 }, { "level", 32, 4 }, { "lastOffset", 36, 4 }, { "encodings", 40, 4 }, { "exportFlag", 44, 4 }, { "importFlag", 48, 4 }, { "nlrFlag", 52, 4 }, { "hasVarargs", 56, 4 }, { 0, 0, 0 } };  return &info[0]; }
static struct __methodinfo __info1= { "initialize", "Scope", "/Users/piumarta/src/idst/object/idc/Scope.st", 0, 44, 62, 0 };
static oop Scope__initialize(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info1);
  oop _1= 0;
  _line(44);
  _1= v_self;
  _line(46);
  _1=_superv(v_Dictionary, s_initialize, 1, _1);
  _1= l_2;
  ((struct t_Scope *)v_stateful_self)->v_argumentCount= _1;
  _1= l_2;
  ((struct t_Scope *)v_stateful_self)->v_temporaryCount= _1;
  _1= l_2;
  ((struct t_Scope *)v_stateful_self)->v_stackSize= _1;
  _1= v_nil;
  ((struct t_Scope *)v_stateful_self)->v_outer= _1;
  _1= v_OrderedCollection;
  _line(51);
  _1=_sendv(s_new, 1, _1);
  ((struct t_Scope *)v_stateful_self)->v_blocks= _1;
  _1= l_2;
  ((struct t_Scope *)v_stateful_self)->v_tag= _1;
  _1= l_2;
  ((struct t_Scope *)v_stateful_self)->v_level= _1;
  _1= l_2;
  ((struct t_Scope *)v_stateful_self)->v_lastOffset= _1;
  _1= v_Dictionary;
  _line(55);
  _1=_sendv(s_new, 1, _1);
  ((struct t_Scope *)v_stateful_self)->v_encodings= _1;
  _1= v_false;
  ((struct t_Scope *)v_stateful_self)->v_exportFlag= _1;
  _1= v_false;
  ((struct t_Scope *)v_stateful_self)->v_importFlag= _1;
  _1= v_false;
  ((struct t_Scope *)v_stateful_self)->v_nlrFlag= _1;
  _1= v_false;
  ((struct t_Scope *)v_stateful_self)->v_hasVarargs= _1;
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info3= { "withOuter:", "Scope", "/Users/piumarta/src/idst/object/idc/Scope.st", 0, 62, 70, &__info1 };
static oop Scope__withOuter_(oop v__closure, oop v_stateful_self, oop v_self, oop v_aScope)
 {
  _enter(&__info3);
  oop _1= 0;
  oop _2= 0;
  _line(62);
  _1= v_self;
  _line(64);
  _1=_sendv(s_new, 1, _1);
  v_self= _1;
  v_stateful_self= _1;
  _1= v_aScope;
  ((struct t_Scope *)v_stateful_self)->v_outer= _1;
  _1= ((struct t_Scope *)v_stateful_self)->v_outer;
  _line(66);
  _1=_sendv(s_level, 1, _1);
  ((struct t_Scope *)v_stateful_self)->v_level= _1;
  _1= ((struct t_Scope *)v_stateful_self)->v_outer;
  _line(67);
  _1=_sendv(s_tag, 1, _1);
  _2= l_4;
  {
    int _l= (int)_1 >> 1;
    int _r= (int)_2 >> 1;
    int _s= _l + _r;
    if ((1 & (int)_1) && ((_s ^ (_s << 1)) >= 0))  _1= (oop)(_s << 1 | 1);  else _1= _sendv(s__2b, 2, _1, _2);
  }
  ((struct t_Scope *)v_stateful_self)->v_tag= _1;
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info5= { "newScope", "Scope", "/Users/piumarta/src/idst/object/idc/Scope.st", 0, 70, 72, &__info3 };
static oop Scope__newScope(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info5);
  oop _1= 0;
  oop _2= 0;
  _line(70);
  _1= v_self;
  _2= v_self;
  _line(70);
  _1=_sendv(s_withOuter_, 2, _1, _2);
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info6= { "stackSize:", "Scope", "/Users/piumarta/src/idst/object/idc/Scope.st", 0, 72, 73, &__info5 };
static oop Scope__stackSize_(oop v__closure, oop v_stateful_self, oop v_self, oop v_size)
 {
  _enter(&__info6);
  oop _1= 0;
  _line(72);
  _1= v_size;
  ((struct t_Scope *)v_stateful_self)->v_stackSize= _1;
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info7= { "stackSize", "Scope", "/Users/piumarta/src/idst/object/idc/Scope.st", 0, 73, 75, &__info6 };
static oop Scope__stackSize(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info7);
  oop _1= 0;
  _line(73);
  _1= ((struct t_Scope *)v_stateful_self)->v_stackSize;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info8= { "addBlock:", "Scope", "/Users/piumarta/src/idst/object/idc/Scope.st", 0, 75, 76, &__info7 };
static oop Scope__addBlock_(oop v__closure, oop v_stateful_self, oop v_self, oop v_blockNode)
 {
  _enter(&__info8);
  oop _1= 0;
  oop _2= 0;
  _line(75);
  _1= ((struct t_Scope *)v_stateful_self)->v_blocks;
  _2= v_blockNode;
  _line(75);
  _1=_sendv(s_add_, 2, _1, _2);
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info9= { "blocks", "Scope", "/Users/piumarta/src/idst/object/idc/Scope.st", 0, 76, 78, &__info8 };
static oop Scope__blocks(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info9);
  oop _1= 0;
  _line(76);
  _1= ((struct t_Scope *)v_stateful_self)->v_blocks;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info10= { "outer", "Scope", "/Users/piumarta/src/idst/object/idc/Scope.st", 0, 78, 79, &__info9 };
static oop Scope__outer(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info10);
  oop _1= 0;
  _line(78);
  _1= ((struct t_Scope *)v_stateful_self)->v_outer;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info11= { "tag", "Scope", "/Users/piumarta/src/idst/object/idc/Scope.st", 0, 79, 81, &__info10 };
static oop Scope__tag(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info11);
  oop _1= 0;
  _line(79);
  _1= ((struct t_Scope *)v_stateful_self)->v_tag;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info12= { "increaseLevel", "Scope", "/Users/piumarta/src/idst/object/idc/Scope.st", 0, 81, 82, &__info11 };
static oop Scope__increaseLevel(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info12);
  oop _1= 0;
  oop _2= 0;
  _line(81);
  _1= ((struct t_Scope *)v_stateful_self)->v_level;
  _2= l_13;
  {
    int _l= (int)_1 >> 1;
    int _r= (int)_2 >> 1;
    int _s= _l + _r;
    if ((1 & (int)_1) && ((_s ^ (_s << 1)) >= 0))  _1= (oop)(_s << 1 | 1);  else _1= _sendv(s__2b, 2, _1, _2);
  }
  ((struct t_Scope *)v_stateful_self)->v_level= _1;
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info14= { "level", "Scope", "/Users/piumarta/src/idst/object/idc/Scope.st", 0, 82, 83, &__info12 };
static oop Scope__level(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info14);
  oop _1= 0;
  _line(82);
  _1= ((struct t_Scope *)v_stateful_self)->v_level;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info15= { "nextOffset", "Scope", "/Users/piumarta/src/idst/object/idc/Scope.st", 0, 83, 85, &__info14 };
static oop Scope__nextOffset(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info15);
  oop _1= 0;
  oop _2= 0;
  _line(83);
  _1= ((struct t_Scope *)v_stateful_self)->v_lastOffset;
  _2= l_16;
  {
    int _l= (int)_1 >> 1;
    int _r= (int)_2 >> 1;
    int _s= _l + _r;
    if ((1 & (int)_1) && ((_s ^ (_s << 1)) >= 0))  _1= (oop)(_s << 1 | 1);  else _1= _sendv(s__2b, 2, _1, _2);
  }
  ((struct t_Scope *)v_stateful_self)->v_lastOffset= _1;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info17= { "exportState", "Scope", "/Users/piumarta/src/idst/object/idc/Scope.st", 0, 85, 86, &__info15 };
static oop Scope__exportState(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info17);
  oop _1= 0;
  _line(85);
  _1= v_true;
  ((struct t_Scope *)v_stateful_self)->v_exportFlag= _1;
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info18= { "hasExports", "Scope", "/Users/piumarta/src/idst/object/idc/Scope.st", 0, 86, 88, &__info17 };
static oop Scope__hasExports(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info18);
  oop _1= 0;
  _line(86);
  _1= ((struct t_Scope *)v_stateful_self)->v_exportFlag;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info19= { "importState", "Scope", "/Users/piumarta/src/idst/object/idc/Scope.st", 0, 88, 89, &__info18 };
static oop Scope__importState(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info19);
  oop _1= 0;
  _line(88);
  _1= v_true;
  ((struct t_Scope *)v_stateful_self)->v_importFlag= _1;
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info20= { "hasImports", "Scope", "/Users/piumarta/src/idst/object/idc/Scope.st", 0, 89, 91, &__info19 };
static oop Scope__hasImports(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info20);
  oop _1= 0;
  _line(89);
  _1= ((struct t_Scope *)v_stateful_self)->v_importFlag;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info21= { "needsOuterScope", "Scope", "/Users/piumarta/src/idst/object/idc/Scope.st", 0, 91, 93, &__info20 };
static oop Scope__needsOuterScope(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info21);
  oop _1= 0;
  _line(91);
  /* or: */
  _1= ((struct t_Scope *)v_stateful_self)->v_importFlag;
  if (_1) goto _l1;
 {
  _1= ((struct t_Scope *)v_stateful_self)->v_nlrFlag;
 }
 _l1:;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info22= { "hasNLR", "Scope", "/Users/piumarta/src/idst/object/idc/Scope.st", 0, 93, 95, &__info21 };
static oop Scope__hasNLR(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info22);
  oop _1= 0;
  _line(93);
  _1= ((struct t_Scope *)v_stateful_self)->v_nlrFlag;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info23= { "noteNLR", "Scope", "/Users/piumarta/src/idst/object/idc/Scope.st", 0, 95, 102, &__info22 };
static oop Scope__noteNLR(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info23);
  oop _1= 0;
  oop _2= 0;
  _line(95);
  _1= v_true;
  ((struct t_Scope *)v_stateful_self)->v_nlrFlag= _1;
  /* ifTrue: */
  _1= 0;
  _2= ((struct t_Scope *)v_stateful_self)->v_outer;
  _line(99);
  _2=_sendv(s_notNil, 1, _2);
  if (!_2) goto _l2;
 {
  _1= ((struct t_Scope *)v_stateful_self)->v_outer;
  _line(99);
  _1=_sendv(s_noteNLR, 1, _1);
 }
 _l2:;
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info24= { "hasVarargs:", "Scope", "/Users/piumarta/src/idst/object/idc/Scope.st", 0, 102, 103, &__info23 };
static oop Scope__hasVarargs_(oop v__closure, oop v_stateful_self, oop v_self, oop v_aBool)
 {
  _enter(&__info24);
  oop _1= 0;
  _line(102);
  _1= v_aBool;
  ((struct t_Scope *)v_stateful_self)->v_hasVarargs= _1;
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info25= { "hasVarargs", "Scope", "/Users/piumarta/src/idst/object/idc/Scope.st", 0, 103, 105, &__info24 };
static oop Scope__hasVarargs(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info25);
  oop _1= 0;
  _line(103);
  _1= ((struct t_Scope *)v_stateful_self)->v_hasVarargs;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info28= { "[] stateVectorSize", "Scope", "/Users/piumarta/src/idst/object/idc/Scope.st", 0, 105, 113, &__info25 };
static oop b_28(oop v__closure, oop v__self, oop v_var)
 {
  _enter(&__info28);
  oop _1= 0;
  oop _2= 0;
  _line(109);
  /* ifTrue: */
  _1= 0;
  _2= v_var;
  _line(109);
  _2=_sendv(s_isFree, 1, _2);
  if (!_2) goto _l3;
 {
  _1= ((oop *)((struct t_BlockClosure *)((struct t_BlockClosure *)v__self)->v_state))[1];  /* size */
  _2= l_29;
  {
    int _l= (int)_1 >> 1;
    int _r= (int)_2 >> 1;
    int _s= _l + _r;
    if ((1 & (int)_1) && ((_s ^ (_s << 1)) >= 0))  _1= (oop)(_s << 1 | 1);  else _1= _sendv(s__2b, 2, _1, _2);
  }
  ((oop *)((struct t_BlockClosure *)((struct t_BlockClosure *)v__self)->v_state))[1]= _1;  /* size */
 }
 _l3:;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info26= { "stateVectorSize", "Scope", "/Users/piumarta/src/idst/object/idc/Scope.st", 0, 105, 113, &__info28 };
static oop Scope__stateVectorSize(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info26);
  oop _state1= _sendv(s_new_5f_, 2, v__vector, 2);
  oop _1= 0;
  oop _2= 0;
  _line(105);
  _1= l_27;
  ((oop *)_state1)[1]= _1;  /* size */
  _1= v_self;
  /* Scope('var'->ArgumentVariableNode) */
  /* Scope('exportFlag'->SlotVariableNode 'importFlag'->SlotVariableNode 'nlrFlag'->SlotVariableNode 'hasVarargs'->SlotVariableNode 'argumentCount'->SlotVariableNode 'temporaryCount'->SlotVariableNode 'stateful_self'->ArgumentVariableNode 'stackSize'->SlotVariableNode 'self'->ArgumentVariableNode 'tag'->SlotVariableNode 'blocks'->SlotVariableNode 'outer'->SlotVariableNode 'encodings'->SlotVariableNode 'tally'->SlotVariableNode 'array'->SlotVariableNode 'size'->TemporaryVariableNode 'lastOffset'->SlotVariableNode 'level'->SlotVariableNode) */
  /* nil */
  /* 2 */
  /* 1 */
  _2= _sendv(s_function_5f_arity_5f_outer_state_nlr_5f_, 6, v_BlockClosure, (oop)b_28, 1, 0, ((oop *)_state1), 0);
  _line(109);
  _1=_sendv(s_do_, 2, _1, _2);
  _1= ((oop *)_state1)[1];  /* size */
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info31= { "[] encode:", "Scope", "/Users/piumarta/src/idst/object/idc/Scope.st", 0, 113, 126, &__info26 };
static oop b_31(oop v__closure, oop v__self)
 {
  _enter(&__info31);
  oop _1= 0;
  _line(117);
  _1= v_nil;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info30= { "encode:", "Scope", "/Users/piumarta/src/idst/object/idc/Scope.st", 0, 113, 126, &__info31 };
static oop Scope__encode_(oop v__closure, oop v_stateful_self, oop v_self, oop v_nameString)
 {
  _enter(&__info30);
  oop v_var= 0;
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  oop _4= 0;
  (void)v_var;
  _line(113);
  /* ifTrue: */
  _1= 0;
  _2= ((struct t_Scope *)v_stateful_self)->v_encodings;
  _3= v_nameString;
  _4= l_31;
  _line(117);
  _2=_sendv(s_at_ifAbsent_, 3, _2, _3, _4);
  v_var= _2;
  _line(117);
  _2=_sendv(s_notNil, 1, _2);
  if (!_2) goto _l4;
 {
  _1= v_var;
  _leave();
  return _1;
 }
 _l4:;
  /* ifTrue: */
  _1= 0;
  _2= v_self;
  _3= v_nameString;
  _4= v_self;
  _line(119);
  _2=_sendv(s_encode_from_, 3, _2, _3, _4);
  v_var= _2;
  _line(119);
  _2=_sendv(s_isNil, 1, _2);
  if (!_2) goto _l5;
 {
  _1= v_var;
  _leave();
  return _1;
 }
 _l5:;
  /* ifTrue: */
  _1= 0;
  _2= v_var;
  _line(121);
  _2=_sendv(s_isFree, 1, _2);
  if (!_2) goto _l6;
 {
  _1= v_self;
  _2= v_var;
  _line(121);
  _2=_sendv(s_scope, 1, _2);
  _line(121);
  _1=_sendv(s_closeOver_, 2, _1, _2);
 }
 _l6:;
  _1= ((struct t_Scope *)v_stateful_self)->v_encodings;
  _2= v_nameString;
  _3= v_var;
  _line(123);
  _1=_sendv(s_at_put_, 3, _1, _2, _3);
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info33= { "[] encode:from:", "Scope", "/Users/piumarta/src/idst/object/idc/Scope.st", 0, 126, 138, &__info30 };
static oop b_33(oop v__closure, oop v__self)
 {
  _enter(&__info33);
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  _line(130);
  /* ifFalse: */
  _1= 0;
  _2= ((struct t_Scope *)((oop *)((struct t_BlockClosure *)((struct t_BlockClosure *)v__self)->v_state))[1])->v_outer;  /* outer */
  _line(130);
  _2=_sendv(s_isNil, 1, _2);
  if (_2) goto _l7;
 {
  _1= ((struct t_Scope *)((oop *)((struct t_BlockClosure *)((struct t_BlockClosure *)v__self)->v_state))[1])->v_outer;  /* outer */
  _2= ((oop *)((struct t_BlockClosure *)((struct t_BlockClosure *)v__self)->v_state))[2];  /* nameString */
  _3= ((oop *)((struct t_BlockClosure *)((struct t_BlockClosure *)v__self)->v_state))[3];  /* innerScope */
  _line(130);
  _1=_sendv(s_encode_from_, 3, _1, _2, _3);
 }
 _l7:;
  _leave();
  return _libid->nlreturn(((struct t_BlockClosure *)v__self)->v__nlr, _1);
  _leave();
 }
static struct __methodinfo __info32= { "encode:from:", "Scope", "/Users/piumarta/src/idst/object/idc/Scope.st", 0, 126, 138, &__info33 };
static oop Scope__encode_from_(oop v__closure, oop v_stateful_self, oop v_self, oop v_nameString, oop v_innerScope)
 {
  _enter(&__info32);
  oop _state1= _sendv(s_new_5f_, 2, v__vector, 19);
  oop v_var= 0;
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  jmp_buf __nlr;
  oop _nlr;
  (void)v_var;
  ((oop *)_state1)[1]= v_stateful_self;
  ((oop *)_state1)[2]= v_nameString;
  ((oop *)_state1)[3]= v_innerScope;
  _nlr= (oop)&__nlr;
  if (setjmp(__nlr)) { return _libid->nlresult(); }
  _line(126);
  _1= v_self;
  _2= ((oop *)_state1)[2];  /* nameString */
  /* Scope() */
  /* Scope('var'->TemporaryVariableNode 'exportFlag'->SlotVariableNode 'importFlag'->SlotVariableNode 'nameString'->ArgumentVariableNode 'nlrFlag'->SlotVariableNode 'hasVarargs'->SlotVariableNode 'stateful_self'->ArgumentVariableNode 'argumentCount'->SlotVariableNode 'temporaryCount'->SlotVariableNode 'stackSize'->SlotVariableNode 'self'->ArgumentVariableNode 'tag'->SlotVariableNode 'blocks'->SlotVariableNode 'outer'->SlotVariableNode 'encodings'->SlotVariableNode 'innerScope'->ArgumentVariableNode 'tally'->SlotVariableNode 'array'->SlotVariableNode 'lastOffset'->SlotVariableNode 'level'->SlotVariableNode) */
  /* nil */
  /* 2 */
  /* 1 */
  _3= _sendv(s_function_5f_arity_5f_outer_state_nlr_5f_, 6, v_BlockClosure, (oop)b_33, 0, 0, ((oop *)_state1), _nlr);
  _line(130);
  _1=_sendv(s_at_ifAbsent_, 3, _1, _2, _3);
  v_var= _1;
  /* ifTrue: */
  _1= 0;
  /* or: */
  _2= v_var;
  _line(133);
  _2=_sendv(s_isGlobal, 1, _2);
  if (_2) goto _l9;
 {
  _2= ((struct t_Scope *)((oop *)_state1)[1])->v_level;  /* level */
  _3= ((oop *)_state1)[3];  /* innerScope */
  _line(133);
  _3=_sendv(s_level, 1, _3);
  _2= (_2 == _3) ? v_true : v_false;
 }
 _l9:;
  if (!_2) goto _l8;
 {
  _1= v_var;
  _leave();
  return _1;
 }
 _l8:;
  _1= v_var;
  _2= ((oop *)_state1)[3];  /* innerScope */
  _line(135);
  _1=_sendv(s_freeWithin_, 2, _1, _2);
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info34= { "closeOver:", "Scope", "/Users/piumarta/src/idst/object/idc/Scope.st", 0, 138, 147, &__info32 };
static oop Scope__closeOver_(oop v__closure, oop v_stateful_self, oop v_self, oop v_outerScope)
 {
  _enter(&__info34);
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  _line(138);
  /* ifFalse: */
  _1= 0;
  _2= v_self;
  _3= v_outerScope;
  _2= (_2 == _3) ? v_true : v_false;
  if (_2) goto _l10;
 {
  _1= v_self;
  _line(143);
  _1=_sendv(s_importState, 1, _1);
  _1= ((struct t_Scope *)v_stateful_self)->v_outer;
  _2= v_outerScope;
  _line(144);
  _1=_sendv(s_closeOver_, 2, _1, _2);
 }
 _l10:;
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info35= { "declare:as:position:", "Scope", "/Users/piumarta/src/idst/object/idc/Scope.st", 0, 147, 152, &__info34 };
static oop Scope__declare_as_position_(oop v__closure, oop v_stateful_self, oop v_self, oop v_nameString, oop v_variableType, oop v_aPosition)
 {
  _enter(&__info35);
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  oop _4= 0;
  oop _5= 0;
  oop _6= 0;
  _line(147);
  _1= v_self;
  _2= v_nameString;
  _3= v_variableType;
  _4= v_nameString;
  _5= v_aPosition;
  _6= v_self;
  _line(149);
  _3=_sendv(s_withName_position_scope_, 4, _3, _4, _5, _6);
  _line(149);
  _1=_sendv(s_at_put_, 3, _1, _2, _3);
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info36= { "declareSlot:position:type:receiver:", "Scope", "/Users/piumarta/src/idst/object/idc/Scope.st", 0, 152, 159, &__info35 };
static oop Scope__declareSlot_position_type_receiver_(oop v__closure, oop v_stateful_self, oop v_self, oop v_name, oop v_position, oop v_type, oop v_selfNode)
 {
  _enter(&__info36);
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  oop _4= 0;
  _line(152);
  /* ifTrue: */
  _1= 0;
  _2= v_self;
  _3= v_name;
  _line(154);
  _2=_sendv(s_encode_, 2, _2, _3);
  _line(154);
  _2=_sendv(s_isNil, 1, _2);
  if (!_2) goto _l11;
 {
  _1= v_self;
  _2= v_name;
  _3= v_SlotVariableNode;
  _4= v_position;
  _line(156);
  _1=_sendv(s_declare_as_position_, 4, _1, _2, _3, _4);
  _2= v_type;
  _3= v_selfNode;
  _line(156);
  _1=_sendv(s_type_receiver_, 3, _1, _2, _3);
 }
 _l11:;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info37= { "declareArgument:position:", "Scope", "/Users/piumarta/src/idst/object/idc/Scope.st", 0, 159, 166, &__info36 };
static oop Scope__declareArgument_position_(oop v__closure, oop v_stateful_self, oop v_self, oop v_name, oop v_position)
 {
  _enter(&__info37);
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  oop _4= 0;
  _line(159);
  /* ifTrue: */
  _1= 0;
  _2= v_self;
  _3= v_name;
  _line(161);
  _2=_sendv(s_encode_, 2, _2, _3);
  _line(161);
  _2=_sendv(s_isNil, 1, _2);
  if (!_2) goto _l12;
 {
  _1= v_self;
  _2= v_name;
  _3= v_ArgumentVariableNode;
  _4= v_position;
  _line(163);
  _1=_sendv(s_declare_as_position_, 4, _1, _2, _3, _4);
  _2= ((struct t_Scope *)v_stateful_self)->v_argumentCount;
  _3= l_38;
  {
    int _l= (int)_2 >> 1;
    int _r= (int)_3 >> 1;
    int _s= _l + _r;
    if ((1 & (int)_2) && ((_s ^ (_s << 1)) >= 0))  _2= (oop)(_s << 1 | 1);  else _2= _sendv(s__2b, 2, _2, _3);
  }
  ((struct t_Scope *)v_stateful_self)->v_argumentCount= _2;
  _line(163);
  _1=_sendv(s_index_, 2, _1, _2);
 }
 _l12:;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info39= { "declareTemporary:position:", "Scope", "/Users/piumarta/src/idst/object/idc/Scope.st", 0, 166, 172, &__info37 };
static oop Scope__declareTemporary_position_(oop v__closure, oop v_stateful_self, oop v_self, oop v_name, oop v_position)
 {
  _enter(&__info39);
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  oop _4= 0;
  _line(166);
  /* ifTrue: */
  _1= 0;
  _2= v_self;
  _3= v_name;
  _line(168);
  _2=_sendv(s_encode_, 2, _2, _3);
  _line(168);
  _2=_sendv(s_isNil, 1, _2);
  if (!_2) goto _l13;
 {
  _1= v_self;
  _2= v_name;
  _3= v_TemporaryVariableNode;
  _4= v_position;
  _line(170);
  _1=_sendv(s_declare_as_position_, 4, _1, _2, _3, _4);
  _2= ((struct t_Scope *)v_stateful_self)->v_temporaryCount;
  _3= l_40;
  {
    int _l= (int)_2 >> 1;
    int _r= (int)_3 >> 1;
    int _s= _l + _r;
    if ((1 & (int)_2) && ((_s ^ (_s << 1)) >= 0))  _2= (oop)(_s << 1 | 1);  else _2= _sendv(s__2b, 2, _2, _3);
  }
  ((struct t_Scope *)v_stateful_self)->v_temporaryCount= _2;
  _line(170);
  _1=_sendv(s_index_, 2, _1, _2);
 }
 _l13:;
  _leave();
  return _1;
  _leave();
 }

static struct __methodinfo __info= { "__id__init__", "<initialisation>", "Scope.st", 0, 0, 0, &__info39 };
void __id__init__Scope(struct __libid *__libid)
{
  if (_libid) return;
  if (!(_libid= __libid)) { fprintf(stderr, "init _libid %p\n", __libid);  abort(); }
# define GC_add_roots _libid->gc_addRoots
  GC_INIT();
  {
    struct _Selector *s= 0;
    for (s= _Selectors;  s->name;  ++s)
      *s->addr= _libid->intern(s->name);
  }
  _enter(&__info);
  _libid->infos(&__info, &__info1);

  _sendv(s__5fimport_, 3, _libid->_object, "Dictionary", "__id__init__Dictionary");
  v__object= _libid->import("_object");
  v__vector= _libid->import("_vector");
  v_Object= _libid->import("Object");
  v_UndefinedObject= _libid->import("UndefinedObject");
  v_StaticBlockClosure= _libid->import("StaticBlockClosure");
  v_BlockClosure= _libid->import("BlockClosure");
  v_Magnitude= _libid->import("Magnitude");
  v_Number= _libid->import("Number");
  v_Integer= _libid->import("Integer");
  v_SmallInteger= _libid->import("SmallInteger");
  v_LargePositiveInteger= _libid->import("LargePositiveInteger");
  v_Collection= _libid->import("Collection");
  v_SequenceableCollection= _libid->import("SequenceableCollection");
  v_ArrayedCollection= _libid->import("ArrayedCollection");
  v_Array= _libid->import("Array");
  v_WordArray= _libid->import("WordArray");
  v_ByteArray= _libid->import("ByteArray");
  v_String= _libid->import("String");
  v_ImmutableString= _libid->import("ImmutableString");
  v_nil= _libid->import("nil");
  v_true= _libid->import("true");
  v_false= _libid->import("false");
  v_Set= _libid->import("Set");
  v_LookupKey= _libid->import("LookupKey");
  v_OrderedCollection= _libid->import("OrderedCollection");
  v_Dictionary= _libid->import("Dictionary");
  _sendv(s__5fimport_, 3, _libid->_object, "SlotVariableNode", "__id__init__SlotVariableNode");
  v_SlotVariableNode= _libid->import("SlotVariableNode");
  _sendv(s__5fimport_, 3, _libid->_object, "ArgumentVariableNode", "__id__init__ArgumentVariableNode");
  v_EncodedVariableNode= _libid->import("EncodedVariableNode");
  v_LocalVariableNode= _libid->import("LocalVariableNode");
  v_ArgumentVariableNode= _libid->import("ArgumentVariableNode");
  _sendv(s__5fimport_, 3, _libid->_object, "TemporaryVariableNode", "__id__init__TemporaryVariableNode");
  v_TemporaryVariableNode= _libid->import("TemporaryVariableNode");
  v_Scope= _libid->proto2(v_Dictionary, Scope___5fsizeof(0, 0));
  _libid->method(v_Scope, s__5fsizeof, (_imp_t)Scope___5fsizeof);
  _libid->method(v_Scope, s__5fdebugName, (_imp_t)Scope___5fdebugName);
  _libid->method(v_Scope, s__5fslots, (_imp_t)Scope___5fslots);
  _libid->export("Scope", v_Scope);
  l_2= _sendv(s_value_5f_, 2, v_SmallInteger, 0);
  _libid->method(v_Scope, s_initialize, (_imp_t)Scope__initialize);
  l_4= _sendv(s_value_5f_, 2, v_SmallInteger, 1);
  _libid->method(v_Scope, s_withOuter_, (_imp_t)Scope__withOuter_);
  _libid->method(v_Scope, s_newScope, (_imp_t)Scope__newScope);
  _libid->method(v_Scope, s_stackSize_, (_imp_t)Scope__stackSize_);
  _libid->method(v_Scope, s_stackSize, (_imp_t)Scope__stackSize);
  _libid->method(v_Scope, s_addBlock_, (_imp_t)Scope__addBlock_);
  _libid->method(v_Scope, s_blocks, (_imp_t)Scope__blocks);
  _libid->method(v_Scope, s_outer, (_imp_t)Scope__outer);
  _libid->method(v_Scope, s_tag, (_imp_t)Scope__tag);
  l_13= _sendv(s_value_5f_, 2, v_SmallInteger, 1);
  _libid->method(v_Scope, s_increaseLevel, (_imp_t)Scope__increaseLevel);
  _libid->method(v_Scope, s_level, (_imp_t)Scope__level);
  l_16= _sendv(s_value_5f_, 2, v_SmallInteger, 1);
  _libid->method(v_Scope, s_nextOffset, (_imp_t)Scope__nextOffset);
  _libid->method(v_Scope, s_exportState, (_imp_t)Scope__exportState);
  _libid->method(v_Scope, s_hasExports, (_imp_t)Scope__hasExports);
  _libid->method(v_Scope, s_importState, (_imp_t)Scope__importState);
  _libid->method(v_Scope, s_hasImports, (_imp_t)Scope__hasImports);
  _libid->method(v_Scope, s_needsOuterScope, (_imp_t)Scope__needsOuterScope);
  _libid->method(v_Scope, s_hasNLR, (_imp_t)Scope__hasNLR);
  _libid->method(v_Scope, s_noteNLR, (_imp_t)Scope__noteNLR);
  _libid->method(v_Scope, s_hasVarargs_, (_imp_t)Scope__hasVarargs_);
  _libid->method(v_Scope, s_hasVarargs, (_imp_t)Scope__hasVarargs);
  l_27= _sendv(s_value_5f_, 2, v_SmallInteger, 0);
  l_29= _sendv(s_value_5f_, 2, v_SmallInteger, 1);
  _libid->method(v_Scope, s_stateVectorSize, (_imp_t)Scope__stateVectorSize);
  l_31= _sendv(s_function_5f_arity_5f_, 3, v_StaticBlockClosure, b_31, 0);
  _libid->method(v_Scope, s_encode_, (_imp_t)Scope__encode_);
  _libid->method(v_Scope, s_encode_from_, (_imp_t)Scope__encode_from_);
  _libid->method(v_Scope, s_closeOver_, (_imp_t)Scope__closeOver_);
  _libid->method(v_Scope, s_declare_as_position_, (_imp_t)Scope__declare_as_position_);
  _libid->method(v_Scope, s_declareSlot_position_type_receiver_, (_imp_t)Scope__declareSlot_position_type_receiver_);
  l_38= _sendv(s_value_5f_, 2, v_SmallInteger, 1);
  _libid->method(v_Scope, s_declareArgument_position_, (_imp_t)Scope__declareArgument_position_);
  l_40= _sendv(s_value_5f_, 2, v_SmallInteger, 1);
  _libid->method(v_Scope, s_declareTemporary_position_, (_imp_t)Scope__declareTemporary_position_);
  _leave();
}
