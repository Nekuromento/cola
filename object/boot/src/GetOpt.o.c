/* generated by Id 1.1 at ,$ */
/* with the command: -I../stage1/ -c GetOpt.st -o ../stage2/GetOpt.o.c */

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
# define _backtrace()			"(no debugging information)\n"
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

static oop s_next= 0;
static oop s_new_5f_= 0;
static oop s_value_5f_= 0;
static oop s__5fimport_= 0;
static oop s_atEnd= 0;
static oop s_skip_= 0;
static oop s__5fslots= 0;
static oop s__2c= 0;
static oop s_size= 0;
static oop s_first= 0;
static oop s_parse_= 0;
static oop s_second= 0;
static oop s__3d= 0;
static oop s_whileFalse_= 0;
static oop s_function_5f_arity_5f_= 0;
static oop s__5fdebugName= 0;
static oop s_parse_startingAt_= 0;
static oop s_new= 0;
static oop s_readStream= 0;
static oop s_function_5f_arity_5f_outer_state_nlr_5f_= 0;
static oop s_parseArgument_with_= 0;
static oop s_ifTrue_ifFalse_= 0;
static oop s_and_= 0;
static oop s__3e= 0;
static oop s_parseOption_with_= 0;
static oop s_default_= 0;
static oop s_at_ifAbsent_= 0;
static oop s_value_= 0;
static oop s_arity= 0;
static oop s_applyOption_to_= 0;
static oop s_applyOption_to_with_= 0;
static oop s_size_5f_value_5f_= 0;
static oop s_value_value_= 0;
static oop s_error_= 0;
static oop s_copyFrom_= 0;
static oop s__5fsizeof= 0;
static struct _Selector { const char *name; oop *addr; } _Selectors[]= {
  { "next", &s_next },
  { "new_:", &s_new_5f_ },
  { "value_:", &s_value_5f_ },
  { "_import:", &s__5fimport_ },
  { "atEnd", &s_atEnd },
  { "skip:", &s_skip_ },
  { "_slots", &s__5fslots },
  { ",", &s__2c },
  { "size", &s_size },
  { "first", &s_first },
  { "parse:", &s_parse_ },
  { "second", &s_second },
  { "=", &s__3d },
  { "whileFalse:", &s_whileFalse_ },
  { "function_:arity_:", &s_function_5f_arity_5f_ },
  { "_debugName", &s__5fdebugName },
  { "parse:startingAt:", &s_parse_startingAt_ },
  { "new", &s_new },
  { "readStream", &s_readStream },
  { "function_:arity_:outer:state:nlr_:", &s_function_5f_arity_5f_outer_state_nlr_5f_ },
  { "parseArgument:with:", &s_parseArgument_with_ },
  { "ifTrue:ifFalse:", &s_ifTrue_ifFalse_ },
  { "and:", &s_and_ },
  { ">", &s__3e },
  { "parseOption:with:", &s_parseOption_with_ },
  { "default:", &s_default_ },
  { "at:ifAbsent:", &s_at_ifAbsent_ },
  { "value:", &s_value_ },
  { "arity", &s_arity },
  { "applyOption:to:", &s_applyOption_to_ },
  { "applyOption:to:with:", &s_applyOption_to_with_ },
  { "size_:value_:", &s_size_5f_value_5f_ },
  { "value:value:", &s_value_value_ },
  { "error:", &s_error_ },
  { "copyFrom:", &s_copyFrom_ },
  { "_sizeof", &s__5fsizeof },
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
struct t_IdentitySet {
  struct _vtable *_vtable[0];
  oop v_tally;
  oop v_array;
};
struct t_IdentityDictionary {
  struct _vtable *_vtable[0];
  oop v_tally;
  oop v_array;
};
struct t_Stream {
  struct _vtable *_vtable[0];
};
struct t_PositionableStream {
  struct _vtable *_vtable[0];
  oop v_collection;
  oop v_position;
  oop v_readLimit;
};
struct t_ReadStream {
  struct _vtable *_vtable[0];
  oop v_collection;
  oop v_position;
  oop v_readLimit;
};
struct t_GetOpt {
  struct _vtable *_vtable[0];
  oop v_tally;
  oop v_array;
  oop v_defaultBlock;
};
static oop l_2= 0;
static oop l_5= 0;
static oop l_10= 0;
static oop l_11= 0;
static oop l_14= 0;
static oop l_15= 0;
static oop l_18= 0;
static oop l_19= 0;
static oop l_20= 0;
static oop l_22= 0;
static oop l_23= 0;
static oop l_24= 0;
static oop v__object= 0;
static oop v__vector= 0;
static oop v_Object= 0;
static oop v_UndefinedObject= 0;
static oop v_StaticBlockClosure= 0;
static oop v_BlockClosure= 0;
static oop v_Magnitude= 0;
static oop v_Character= 0;
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
static oop v_Dictionary= 0;
static oop v_IdentityDictionary= 0;
static oop v_Stream= 0;
static oop v_PositionableStream= 0;
static oop v_GetOpt= 0;
static size_t GetOpt___5fsizeof(oop _closure, oop v_self) { return sizeof(struct t_GetOpt); }
static char *GetOpt___5fdebugName(oop _closure, oop v_self) { return "GetOpt"; }
static struct __slotinfo *GetOpt___5fslots(oop _closure, oop v_self) { static struct __slotinfo info[]= { { "tally", 0, 4 }, { "array", 4, 4 }, { "defaultBlock", 8, 4 }, { 0, 0, 0 } };  return &info[0]; }
static struct __methodinfo __info2= { "[] new", "GetOpt", "/Users/piumarta/src/idst/object/st80/GetOpt.st", 0, 67, 73, 0 };
static oop b_2(oop v__closure, oop v__self, oop v_arg)
 {
  _enter(&__info2);
  oop _1= 0;
  _line(70);
  _1= v_nil;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info1= { "new", "GetOpt", "/Users/piumarta/src/idst/object/st80/GetOpt.st", 0, 67, 73, &__info2 };
static oop GetOpt__new(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info1);
  oop _1= 0;
  _line(67);
  _1= v_self;
  _line(69);
  _1=_superv(v_IdentityDictionary, s_new, 1, _1);
  v_self= _1;
  v_stateful_self= _1;
  _1= l_2;
  ((struct t_GetOpt *)v_stateful_self)->v_defaultBlock= _1;
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info3= { "default:", "GetOpt", "/Users/piumarta/src/idst/object/st80/GetOpt.st", 0, 73, 75, &__info1 };
static oop GetOpt__default_(oop v__closure, oop v_stateful_self, oop v_self, oop v_unaryBlock)
 {
  _enter(&__info3);
  oop _1= 0;
  _line(73);
  _1= v_unaryBlock;
  ((struct t_GetOpt *)v_stateful_self)->v_defaultBlock= _1;
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info4= { "parse:", "GetOpt", "/Users/piumarta/src/idst/object/st80/GetOpt.st", 0, 75, 80, &__info3 };
static oop GetOpt__parse_(oop v__closure, oop v_stateful_self, oop v_self, oop v_argumentCollection)
 {
  _enter(&__info4);
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  _line(75);
  _1= v_self;
  _2= v_argumentCollection;
  _3= l_5;
  _line(77);
  _1=_sendv(s_parse_startingAt_, 3, _1, _2, _3);
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info7= { "[] parse:startingAt:", "GetOpt", "/Users/piumarta/src/idst/object/st80/GetOpt.st", 0, 80, 91, &__info4 };
static oop b_7(oop v__closure, oop v__self)
 {
  _enter(&__info7);
  oop _1= 0;
  _line(84);
  _1= ((oop *)((struct t_BlockClosure *)((struct t_BlockClosure *)v__self)->v_state))[1];  /* args */
  _line(84);
  _1=_sendv(s_atEnd, 1, _1);
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info8= { "[] parse:startingAt:", "GetOpt", "/Users/piumarta/src/idst/object/st80/GetOpt.st", 0, 80, 91, &__info7 };
static oop b_8(oop v__closure, oop v__self)
 {
  _enter(&__info8);
  oop v_arg= 0;
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  (void)v_arg;
  _line(86);
  _1= ((oop *)((struct t_BlockClosure *)((struct t_BlockClosure *)v__self)->v_state))[1];  /* args */
  _line(87);
  _1=_sendv(s_next, 1, _1);
  v_arg= _1;
  _1= ((oop *)((struct t_BlockClosure *)((struct t_BlockClosure *)v__self)->v_state))[2];  /* self */
  _2= v_arg;
  _3= ((oop *)((struct t_BlockClosure *)((struct t_BlockClosure *)v__self)->v_state))[1];  /* args */
  _line(88);
  _1=_sendv(s_parseArgument_with_, 3, _1, _2, _3);
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info6= { "parse:startingAt:", "GetOpt", "/Users/piumarta/src/idst/object/st80/GetOpt.st", 0, 80, 91, &__info8 };
static oop GetOpt__parse_startingAt_(oop v__closure, oop v_stateful_self, oop v_self, oop v_argumentCollection, oop v_offset)
 {
  _enter(&__info6);
  oop _state1= _sendv(s_new_5f_, 2, v__vector, 7);
  oop _1= 0;
  oop _2= 0;
  ((oop *)_state1)[3]= v_stateful_self;
  ((oop *)_state1)[2]= v_self;
  _line(80);
  _1= v_argumentCollection;
  _line(83);
  _1=_sendv(s_readStream, 1, _1);
  _2= v_offset;
  _line(83);
  _1=_sendv(s_skip_, 2, _1, _2);
  ((oop *)_state1)[1]= _1;  /* args */
  /* Scope() */
  /* Scope('args'->TemporaryVariableNode 'tally'->SlotVariableNode 'argumentCollection'->ArgumentVariableNode 'array'->SlotVariableNode 'stateful_self'->ArgumentVariableNode 'defaultBlock'->SlotVariableNode 'offset'->ArgumentVariableNode 'self'->ArgumentVariableNode) */
  /* nil */
  /* 2 */
  /* 1 */
  _1= _sendv(s_function_5f_arity_5f_outer_state_nlr_5f_, 6, v_BlockClosure, (oop)b_7, 0, 0, ((oop *)_state1), 0);
  /* Scope('arg'->TemporaryVariableNode) */
  /* Scope('args'->TemporaryVariableNode 'tally'->SlotVariableNode 'argumentCollection'->ArgumentVariableNode 'array'->SlotVariableNode 'stateful_self'->ArgumentVariableNode 'defaultBlock'->SlotVariableNode 'offset'->ArgumentVariableNode 'self'->ArgumentVariableNode) */
  /* nil */
  /* 2 */
  /* 1 */
  _2= _sendv(s_function_5f_arity_5f_outer_state_nlr_5f_, 6, v_BlockClosure, (oop)b_8, 0, 0, ((oop *)_state1), 0);
  _line(85);
  _1=_sendv(s_whileFalse_, 2, _1, _2);
  _1= ((oop *)_state1)[2];  /* self */
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info9= { "parseArgument:with:", "GetOpt", "/Users/piumarta/src/idst/object/st80/GetOpt.st", 0, 91, 98, &__info6 };
static oop GetOpt__parseArgument_with_(oop v__closure, oop v_stateful_self, oop v_self, oop v_arg, oop v_rest)
 {
  _enter(&__info9);
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  _line(91);
  /* ifTrue:ifFalse: */
  /* and: */
  _1= v_arg;
  _line(93);
  _1=_sendv(s_first, 1, _1);
  _2= l_10;
  if (1 & (long)_1 & (long)_2) {
    _1= (((long)_1 == (long)_2) ? v_true : v_false);
  } else _1= _sendv(s__3d, 2, _1, _2);
  if (!_1) goto _l3;
 {
  _1= v_arg;
  _line(93);
  _1=_sendv(s_size, 1, _1);
  _2= l_11;
  if (1 & (long)_1) {
    _1= (((long)_1 > (long)_2) ? v_true : v_false);
  } else _1= _sendv(s__3e, 2, _1, _2);
 }
 _l3:;
  if (!_1) goto _l1;
 {
  _1= v_self;
  _2= v_arg;
  _3= v_rest;
  _line(94);
  _1=_sendv(s_parseOption_with_, 3, _1, _2, _3);
 }
  goto _l2;
 _l1:;
 {
  _1= ((struct t_GetOpt *)v_stateful_self)->v_defaultBlock;
  _2= v_arg;
  _line(95);
  _1=_sendv(s_value_, 2, _1, _2);
 }
 _l2:;
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info16= { "[] parseOption:with:", "GetOpt", "/Users/piumarta/src/idst/object/st80/GetOpt.st", 0, 98, 107, &__info9 };
static oop b_16(oop v__closure, oop v__self)
 {
  _enter(&__info16);
  oop _1= 0;
  oop _2= 0;
  _line(101);
  _1= ((struct t_GetOpt *)((oop *)((struct t_BlockClosure *)((struct t_BlockClosure *)((struct t_BlockClosure *)v__self)->v_outer)->v_state))[2])->v_defaultBlock;  /* defaultBlock */
  _2= ((oop *)((struct t_BlockClosure *)((struct t_BlockClosure *)((struct t_BlockClosure *)v__self)->v_outer)->v_state))[3];  /* option */
  _line(101);
  _1=_sendv(s_value_, 2, _1, _2);
  _leave();
  return _libid->nlreturn(((struct t_BlockClosure *)v__self)->v__nlr, _1);
  _leave();
 }
static struct __methodinfo __info13= { "[] parseOption:with:", "GetOpt", "/Users/piumarta/src/idst/object/st80/GetOpt.st", 0, 98, 107, &__info16 };
static oop b_13(oop v__closure, oop v__self)
 {
  _enter(&__info13);
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  _line(101);
  _1= ((oop *)((struct t_BlockClosure *)((struct t_BlockClosure *)v__self)->v_state))[1];  /* self */
  _2= l_15;
  /* Scope() */
  /* Scope() */
  /* Object */
  /* 3 */
  /* 2 */
  _3= _sendv(s_function_5f_arity_5f_outer_state_nlr_5f_, 6, v_BlockClosure, (oop)b_16, 0, v__self, 0, ((struct t_BlockClosure *)v__self)->v__nlr);
  _line(101);
  _1=_sendv(s_at_ifAbsent_, 3, _1, _2, _3);
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info12= { "parseOption:with:", "GetOpt", "/Users/piumarta/src/idst/object/st80/GetOpt.st", 0, 98, 107, &__info13 };
static oop GetOpt__parseOption_with_(oop v__closure, oop v_stateful_self, oop v_self, oop v_option, oop v_rest)
 {
  _enter(&__info12);
  oop _state1= _sendv(s_new_5f_, 2, v__vector, 7);
  oop v_block= 0;
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  oop _4= 0;
  jmp_buf __nlr;
  oop _nlr;
  (void)v_block;
  ((oop *)_state1)[2]= v_stateful_self;
  ((oop *)_state1)[1]= v_self;
  ((oop *)_state1)[3]= v_option;
  _nlr= (oop)&__nlr;
  if (setjmp(__nlr)) { return _libid->nlresult(); }
  _line(98);
  _1= ((oop *)_state1)[1];  /* self */
  _2= ((oop *)_state1)[3];  /* option */
  _line(101);
  _2=_sendv(s_second, 1, _2);
  /* Scope() */
  /* Scope('option'->ArgumentVariableNode 'tally'->SlotVariableNode 'stateful_self'->ArgumentVariableNode 'array'->SlotVariableNode 'defaultBlock'->SlotVariableNode 'self'->ArgumentVariableNode 'block'->TemporaryVariableNode 'rest'->ArgumentVariableNode) */
  /* nil */
  /* 2 */
  /* 1 */
  _3= _sendv(s_function_5f_arity_5f_outer_state_nlr_5f_, 6, v_BlockClosure, (oop)b_13, 0, 0, ((oop *)_state1), _nlr);
  _line(101);
  _1=_sendv(s_at_ifAbsent_, 3, _1, _2, _3);
  v_block= _1;
  /* ifTrue:ifFalse: */
  _1= v_block;
  _line(102);
  _1=_sendv(s_arity, 1, _1);
  _2= l_14;
  if (1 & (long)_1) {
    _1= (((long)_1 == (long)_2) ? v_true : v_false);
  } else _1= _sendv(s__3d, 2, _1, _2);
  if (!_1) goto _l4;
 {
  _1= ((oop *)_state1)[1];  /* self */
  _2= ((oop *)_state1)[3];  /* option */
  _3= v_block;
  _line(103);
  _1=_sendv(s_applyOption_to_, 3, _1, _2, _3);
 }
  goto _l5;
 _l4:;
 {
  _1= ((oop *)_state1)[1];  /* self */
  _2= ((oop *)_state1)[3];  /* option */
  _3= v_block;
  _4= v_rest;
  _line(104);
  _1=_sendv(s_applyOption_to_with_, 4, _1, _2, _3, _4);
 }
 _l5:;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info17= { "applyOption:to:", "GetOpt", "/Users/piumarta/src/idst/object/st80/GetOpt.st", 0, 107, 114, &__info12 };
static oop GetOpt__applyOption_to_(oop v__closure, oop v_stateful_self, oop v_self, oop v_anOption, oop v_unaryBlock)
 {
  _enter(&__info17);
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  _line(107);
  /* ifTrue:ifFalse: */
  _1= v_anOption;
  _line(109);
  _1=_sendv(s_size, 1, _1);
  _2= l_18;
  if (1 & (long)_1) {
    _1= (((long)_1 == (long)_2) ? v_true : v_false);
  } else _1= _sendv(s__3d, 2, _1, _2);
  if (!_1) goto _l6;
 {
  _1= v_unaryBlock;
  _2= v_anOption;
  _line(110);
  _2=_sendv(s_second, 1, _2);
  _line(110);
  _1=_sendv(s_value_, 2, _1, _2);
 }
  goto _l7;
 _l6:;
 {
  _1= v_self;
  _2= l_19;
  _3= v_anOption;
  _line(111);
  _2=_sendv(s__2c, 2, _2, _3);
  _3= l_20;
  _line(111);
  _2=_sendv(s__2c, 2, _2, _3);
  _line(111);
  _1=_sendv(s_error_, 2, _1, _2);
 }
 _l7:;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info21= { "applyOption:to:with:", "GetOpt", "/Users/piumarta/src/idst/object/st80/GetOpt.st", 0, 114, 122, &__info17 };
static oop GetOpt__applyOption_to_with_(oop v__closure, oop v_stateful_self, oop v_self, oop v_anOption, oop v_binaryBlock, oop v_rest)
 {
  _enter(&__info21);
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  oop _4= 0;
  _line(114);
  /* ifTrue:ifFalse: */
  _1= v_anOption;
  _line(116);
  _1=_sendv(s_size, 1, _1);
  _2= l_22;
  if (1 & (long)_1) {
    _1= (((long)_1 == (long)_2) ? v_true : v_false);
  } else _1= _sendv(s__3d, 2, _1, _2);
  if (!_1) goto _l8;
 {
  /* ifTrue:ifFalse: */
  _1= v_rest;
  _line(117);
  _1=_sendv(s_atEnd, 1, _1);
  if (!_1) goto _l10;
 {
  _1= v_self;
  _2= l_23;
  _3= v_anOption;
  _line(118);
  _2=_sendv(s__2c, 2, _2, _3);
  _line(118);
  _1=_sendv(s_error_, 2, _1, _2);
 }
  goto _l11;
 _l10:;
 {
  _1= v_binaryBlock;
  _2= v_anOption;
  _line(119);
  _2=_sendv(s_second, 1, _2);
  _3= v_rest;
  _line(119);
  _3=_sendv(s_next, 1, _3);
  _line(119);
  _1=_sendv(s_value_value_, 3, _1, _2, _3);
 }
 _l11:;
 }
  goto _l9;
 _l8:;
 {
  _1= v_binaryBlock;
  _2= v_anOption;
  _line(120);
  _2=_sendv(s_second, 1, _2);
  _3= v_anOption;
  _4= l_24;
  _line(120);
  _3=_sendv(s_copyFrom_, 2, _3, _4);
  _line(120);
  _1=_sendv(s_value_value_, 3, _1, _2, _3);
 }
 _l9:;
  _leave();
  return _1;
  _leave();
 }

static struct __methodinfo __info= { "__id__init__", "<initialisation>", "GetOpt.st", 0, 0, 0, &__info21 };
void __id__init__GetOpt(struct __libid *__libid)
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
  _libid->infos(&__info, &__info2);

  _sendv(s__5fimport_, 3, _libid->_object, "IdentityDictionary", "__id__init__IdentityDictionary");
  v__object= _libid->import("_object");
  v__vector= _libid->import("_vector");
  v_Object= _libid->import("Object");
  v_UndefinedObject= _libid->import("UndefinedObject");
  v_StaticBlockClosure= _libid->import("StaticBlockClosure");
  v_BlockClosure= _libid->import("BlockClosure");
  v_Magnitude= _libid->import("Magnitude");
  v_Character= _libid->import("Character");
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
  v_Dictionary= _libid->import("Dictionary");
  v_IdentityDictionary= _libid->import("IdentityDictionary");
  _sendv(s__5fimport_, 3, _libid->_object, "ReadStream", "__id__init__ReadStream");
  v_Stream= _libid->import("Stream");
  v_PositionableStream= _libid->import("PositionableStream");
  v_GetOpt= _libid->proto2(v_IdentityDictionary, GetOpt___5fsizeof(0, 0));
  _libid->method(v_GetOpt, s__5fsizeof, (_imp_t)GetOpt___5fsizeof);
  _libid->method(v_GetOpt, s__5fdebugName, (_imp_t)GetOpt___5fdebugName);
  _libid->method(v_GetOpt, s__5fslots, (_imp_t)GetOpt___5fslots);
  _libid->export("GetOpt", v_GetOpt);
  l_2= _sendv(s_function_5f_arity_5f_, 3, v_StaticBlockClosure, b_2, 1);
  _libid->method(v_GetOpt, s_new, (_imp_t)GetOpt__new);
  _libid->method(v_GetOpt, s_default_, (_imp_t)GetOpt__default_);
  l_5= _sendv(s_value_5f_, 2, v_SmallInteger, 0);
  _libid->method(v_GetOpt, s_parse_, (_imp_t)GetOpt__parse_);
  _libid->method(v_GetOpt, s_parse_startingAt_, (_imp_t)GetOpt__parse_startingAt_);
  l_10= _sendv(s_value_5f_, 2, v_Character, 45);
  l_11= _sendv(s_value_5f_, 2, v_SmallInteger, 1);
  _libid->method(v_GetOpt, s_parseArgument_with_, (_imp_t)GetOpt__parseArgument_with_);
  l_14= _sendv(s_value_5f_, 2, v_SmallInteger, 1);
  l_15= _sendv(s_value_5f_, 2, v_Character, 63);
  _libid->method(v_GetOpt, s_parseOption_with_, (_imp_t)GetOpt__parseOption_with_);
  l_18= _sendv(s_value_5f_, 2, v_SmallInteger, 2);
  l_19= _sendv(s_size_5f_value_5f_, 3, v_ImmutableString, 7, "option ");
  l_20= _sendv(s_size_5f_value_5f_, 3, v_ImmutableString, 28, " should not have an argument");
  _libid->method(v_GetOpt, s_applyOption_to_, (_imp_t)GetOpt__applyOption_to_);
  l_22= _sendv(s_value_5f_, 2, v_SmallInteger, 2);
  l_23= _sendv(s_size_5f_value_5f_, 3, v_ImmutableString, 27, "argument missing to option ");
  l_24= _sendv(s_value_5f_, 2, v_SmallInteger, 3);
  _libid->method(v_GetOpt, s_applyOption_to_with_, (_imp_t)GetOpt__applyOption_to_with_);
  _leave();
}
