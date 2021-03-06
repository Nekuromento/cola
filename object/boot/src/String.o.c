/* generated by Id 1.1 at ,$ */
/* with the command: -I../stage1/ -c String.st -o ../stage2/String.o.c */

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

static oop s_new_= 0;
static oop s__3c_3d= 0;
static oop s_new_5f_= 0;
static oop s_byteAt_= 0;
static oop s_value_5f_= 0;
static oop s_species= 0;
static oop s__5fimport_= 0;
static oop s_ifFalse_= 0;
static oop s__5fbytes= 0;
static oop s_collect_= 0;
static oop s_to_do_= 0;
static oop s_size= 0;
static oop s__3d_3d= 0;
static oop s__5fclone= 0;
static oop s_min_= 0;
static oop s_isString= 0;
static oop s__3d= 0;
static oop s_asUppercase= 0;
static oop s_function_5f_arity_5f_= 0;
static oop s_asLowercase= 0;
static oop s__5fstringValue= 0;
static oop s__3c= 0;
static oop s_strncmp_5f__5f__5f_= 0;
static oop s__5fintegerValue= 0;
static oop s_and_= 0;
static oop s__3e= 0;
static oop s_asByteArray= 0;
static oop s_function_5f_arity_5f_outer_state_nlr_5f_= 0;
static oop s_errorImmutable= 0;
static oop s_or_= 0;
static oop s_writeStream= 0;
static oop s_value_= 0;
static oop s__3e_3d= 0;
static oop s_at_= 0;
static oop s_copyFrom_to_= 0;
static oop s_asciiValue= 0;
static oop s_at_put_= 0;
static struct _Selector { const char *name; oop *addr; } _Selectors[]= {
  { "new:", &s_new_ },
  { "<=", &s__3c_3d },
  { "new_:", &s_new_5f_ },
  { "byteAt:", &s_byteAt_ },
  { "value_:", &s_value_5f_ },
  { "species", &s_species },
  { "_import:", &s__5fimport_ },
  { "ifFalse:", &s_ifFalse_ },
  { "_bytes", &s__5fbytes },
  { "collect:", &s_collect_ },
  { "to:do:", &s_to_do_ },
  { "size", &s_size },
  { "==", &s__3d_3d },
  { "_clone", &s__5fclone },
  { "min:", &s_min_ },
  { "isString", &s_isString },
  { "=", &s__3d },
  { "asUppercase", &s_asUppercase },
  { "function_:arity_:", &s_function_5f_arity_5f_ },
  { "asLowercase", &s_asLowercase },
  { "_stringValue", &s__5fstringValue },
  { "<", &s__3c },
  { "strncmp_:_:_:", &s_strncmp_5f__5f__5f_ },
  { "_integerValue", &s__5fintegerValue },
  { "and:", &s_and_ },
  { ">", &s__3e },
  { "asByteArray", &s_asByteArray },
  { "function_:arity_:outer:state:nlr_:", &s_function_5f_arity_5f_outer_state_nlr_5f_ },
  { "errorImmutable", &s_errorImmutable },
  { "or:", &s_or_ },
  { "writeStream", &s_writeStream },
  { "value:", &s_value_ },
  { ">=", &s__3e_3d },
  { "at:", &s_at_ },
  { "copyFrom:to:", &s_copyFrom_to_ },
  { "asciiValue", &s_asciiValue },
  { "at:put:", &s_at_put_ },
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
static oop l_5= 0;
static oop l_7= 0;
static oop l_13= 0;
static oop l_15= 0;
static oop l_17= 0;
static oop l_22= 0;
static oop l_27= 0;
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
static oop v_true= 0;
static oop v_false= 0;
static struct __methodinfo __info1= { "species", "String", "/Users/piumarta/src/idst/object/st80/String.st", 0, 25, 27, 0 };
static oop String__species(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info1);
  oop _1= 0;
  _line(25);
  _1= v_String;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info2= { "at:", "String", "/Users/piumarta/src/idst/object/st80/String.st", 0, 27, 28, &__info1 };
static oop String__at_(oop v__closure, oop v_stateful_self, oop v_self, oop v_anInteger)
 {
  _enter(&__info2);
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  _line(27);
  _1= v_Character;
  _2= v_self;
  _3= v_anInteger;
  _line(27);
  _2=_superv(v_ByteArray, s_at_, 2, _2, _3);
  _line(27);
  _1=_sendv(s_value_, 2, _1, _2);
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info3= { "at:put:", "String", "/Users/piumarta/src/idst/object/st80/String.st", 0, 28, 30, &__info2 };
static oop String__at_put_(oop v__closure, oop v_stateful_self, oop v_self, oop v_anInteger, oop v_aChar)
 {
  _enter(&__info3);
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  _line(28);
  _1= v_self;
  _2= v_anInteger;
  _3= v_aChar;
  _line(28);
  _3=_sendv(s_asciiValue, 1, _3);
  _line(28);
  _1=_superv(v_ByteArray, s_at_put_, 3, _1, _2, _3);
  _1= v_aChar;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info5= { "[] asUppercase", "String", "/Users/piumarta/src/idst/object/st80/String.st", 0, 30, 31, &__info3 };
static oop b_5(oop v__closure, oop v__self, oop v_char)
 {
  _enter(&__info5);
  oop _1= 0;
  _line(30);
  _1= v_char;
  _line(30);
  _1=_sendv(s_asUppercase, 1, _1);
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info4= { "asUppercase", "String", "/Users/piumarta/src/idst/object/st80/String.st", 0, 30, 31, &__info5 };
static oop String__asUppercase(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info4);
  oop _1= 0;
  oop _2= 0;
  _line(30);
  _1= v_self;
  _2= l_5;
  _line(30);
  _1=_sendv(s_collect_, 2, _1, _2);
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info7= { "[] asLowercase", "String", "/Users/piumarta/src/idst/object/st80/String.st", 0, 31, 33, &__info4 };
static oop b_7(oop v__closure, oop v__self, oop v_char)
 {
  _enter(&__info7);
  oop _1= 0;
  _line(31);
  _1= v_char;
  _line(31);
  _1=_sendv(s_asLowercase, 1, _1);
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info6= { "asLowercase", "String", "/Users/piumarta/src/idst/object/st80/String.st", 0, 31, 33, &__info7 };
static oop String__asLowercase(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info6);
  oop _1= 0;
  oop _2= 0;
  _line(31);
  _1= v_self;
  _2= l_7;
  _line(31);
  _1=_sendv(s_collect_, 2, _1, _2);
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info8= { "_stringValue", "String", "/Users/piumarta/src/idst/object/st80/String.st", 0, 33, 45, &__info6 };
static oop String___5fstringValue(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info8);
  oop v__string= 0;
  oop _1= 0;
  (void)v__string;
  _line(33);
 {
# define self ((struct t_String *)v_self)

      int len= (long)(self->v_size) >> 1;
      v__string= _libid->balloc(len + 1);
      memcpy(v__string, self->v__bytes, len);
      ((char *)v__string)[len]= '\0';
    
# undef self
 }
  _1= 0;
  _1= v__string;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info9= { "value_:", "String", "/Users/piumarta/src/idst/object/st80/String.st", 0, 45, 56, &__info8 };
static oop String__value_5f_(oop v__closure, oop v_stateful_self, oop v_self, oop v__cString)
 {
  _enter(&__info9);
  oop _1= 0;
  _line(45);
  _1= v_self;
  _line(47);
  _1=_sendv(s__5fclone, 1, _1);
  v_self= _1;
  v_stateful_self= _1;
 {
# define self ((struct t_String *)v_self)

      int len= strlen((char *)v__cString);
      self->v_size= (oop)(long)((len << 1) | 1);
      self->v__bytes= _libid->balloc(len);
      memcpy(self->v__bytes, v__cString, len);
    
# undef self
 }
  _1= 0;
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info10= { "isString", "Object", "/Users/piumarta/src/idst/object/st80/String.st", 0, 56, 57, &__info9 };
static oop Object__isString(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info10);
  oop _1= 0;
  _line(56);
  _1= v_false;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info11= { "isString", "String", "/Users/piumarta/src/idst/object/st80/String.st", 0, 57, 59, &__info10 };
static oop String__isString(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info11);
  oop _1= 0;
  _line(57);
  _1= v_true;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info12= { "<", "String", "/Users/piumarta/src/idst/object/st80/String.st", 0, 59, 67, &__info11 };
static oop String___3c(oop v__closure, oop v_stateful_self, oop v_self, oop v_aString)
 {
  _enter(&__info12);
  oop v_cmp= 0;
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  oop _4= 0;
  oop _5= 0;
  (void)v_cmp;
  _line(59);
  /* ifFalse: */
  _1= 0;
  _2= v_aString;
  _line(62);
  _2=_sendv(s_isString, 1, _2);
  if (_2) goto _l1;
 {
  _1= v_false;
  _leave();
  return _1;
 }
 _l1:;
  _1= v_self;
  _2= ((struct t_String *)v_stateful_self)->v__bytes;
  _3= v_aString;
  _line(63);
  _3=_sendv(s__5fbytes, 1, _3);
  _4= v_self;
  _line(63);
  _4=_sendv(s_size, 1, _4);
  _5= v_aString;
  _line(63);
  _5=_sendv(s_size, 1, _5);
  _line(63);
  _4=_sendv(s_min_, 2, _4, _5);
  _line(63);
  _4=_sendv(s__5fintegerValue, 1, _4);
  _line(63);
  _1=_sendv(s_strncmp_5f__5f__5f_, 4, _1, _2, _3, _4);
  v_cmp= _1;
  /* or: */
  _1= v_cmp;
  _2= l_13;
  if (1 & (long)_1) {
    _1= (((long)_1 < (long)_2) ? v_true : v_false);
  } else _1= _sendv(s__3c, 2, _1, _2);
  if (_1) goto _l2;
 {
  /* and: */
  _1= v_cmp;
  _2= l_13;
  _1= (_1 == _2) ? v_true : v_false;
  if (!_1) goto _l3;
 {
  _1= v_self;
  _line(64);
  _1=_sendv(s_size, 1, _1);
  _2= v_aString;
  _line(64);
  _2=_sendv(s_size, 1, _2);
  if (1 & (long)_1 & (long)_2) {
    _1= (((long)_1 < (long)_2) ? v_true : v_false);
  } else _1= _sendv(s__3c, 2, _1, _2);
 }
 _l3:;
 }
 _l2:;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info14= { "=", "String", "/Users/piumarta/src/idst/object/st80/String.st", 0, 67, 73, &__info12 };
static oop String___3d(oop v__closure, oop v_stateful_self, oop v_self, oop v_aString)
 {
  _enter(&__info14);
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  oop _4= 0;
  oop _5= 0;
  _line(67);
  /* ifFalse: */
  _1= 0;
  /* and: */
  _2= v_aString;
  _line(69);
  _2=_sendv(s_isString, 1, _2);
  if (!_2) goto _l5;
 {
  _2= v_self;
  _line(69);
  _2=_sendv(s_size, 1, _2);
  _3= v_aString;
  _line(69);
  _3=_sendv(s_size, 1, _3);
  _2= (_2 == _3) ? v_true : v_false;
 }
 _l5:;
  if (_2) goto _l4;
 {
  _1= v_false;
  _leave();
  return _1;
 }
 _l4:;
  _1= l_15;
  _2= v_self;
  _3= ((struct t_String *)v_stateful_self)->v__bytes;
  _4= v_aString;
  _line(70);
  _4=_sendv(s__5fbytes, 1, _4);
  _5= v_self;
  _line(70);
  _5=_sendv(s_size, 1, _5);
  _line(70);
  _5=_sendv(s__5fintegerValue, 1, _5);
  _line(70);
  _2=_sendv(s_strncmp_5f__5f__5f_, 4, _2, _3, _4, _5);
  _1= (_1 == _2) ? v_true : v_false;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info16= { ">", "String", "/Users/piumarta/src/idst/object/st80/String.st", 0, 73, 81, &__info14 };
static oop String___3e(oop v__closure, oop v_stateful_self, oop v_self, oop v_aString)
 {
  _enter(&__info16);
  oop v_cmp= 0;
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  oop _4= 0;
  oop _5= 0;
  (void)v_cmp;
  _line(73);
  /* ifFalse: */
  _1= 0;
  _2= v_aString;
  _line(76);
  _2=_sendv(s_isString, 1, _2);
  if (_2) goto _l6;
 {
  _1= v_false;
  _leave();
  return _1;
 }
 _l6:;
  _1= v_self;
  _2= ((struct t_String *)v_stateful_self)->v__bytes;
  _3= v_aString;
  _line(77);
  _3=_sendv(s__5fbytes, 1, _3);
  _4= v_self;
  _line(77);
  _4=_sendv(s_size, 1, _4);
  _5= v_aString;
  _line(77);
  _5=_sendv(s_size, 1, _5);
  _line(77);
  _4=_sendv(s_min_, 2, _4, _5);
  _line(77);
  _4=_sendv(s__5fintegerValue, 1, _4);
  _line(77);
  _1=_sendv(s_strncmp_5f__5f__5f_, 4, _1, _2, _3, _4);
  v_cmp= _1;
  /* or: */
  _1= v_cmp;
  _2= l_17;
  if (1 & (long)_1) {
    _1= (((long)_1 > (long)_2) ? v_true : v_false);
  } else _1= _sendv(s__3e, 2, _1, _2);
  if (_1) goto _l7;
 {
  /* and: */
  _1= v_cmp;
  _2= l_17;
  _1= (_1 == _2) ? v_true : v_false;
  if (!_1) goto _l8;
 {
  _1= v_self;
  _line(78);
  _1=_sendv(s_size, 1, _1);
  _2= v_aString;
  _line(78);
  _2=_sendv(s_size, 1, _2);
  if (1 & (long)_1 & (long)_2) {
    _1= (((long)_1 > (long)_2) ? v_true : v_false);
  } else _1= _sendv(s__3e, 2, _1, _2);
 }
 _l8:;
 }
 _l7:;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info18= { "<=", "String", "/Users/piumarta/src/idst/object/st80/String.st", 0, 81, 82, &__info16 };
static oop String___3c_3d(oop v__closure, oop v_stateful_self, oop v_self, oop v_aString)
 {
  _enter(&__info18);
  oop _1= 0;
  oop _2= 0;
  _line(81);
  /* or: */
  _1= v_self;
  _2= v_aString;
  if (1 & (long)_1 & (long)_2) {
    _1= (((long)_1 == (long)_2) ? v_true : v_false);
  } else _1= _sendv(s__3d, 2, _1, _2);
  if (_1) goto _l9;
 {
  _1= v_self;
  _2= v_aString;
  if (1 & (long)_1 & (long)_2) {
    _1= (((long)_1 < (long)_2) ? v_true : v_false);
  } else _1= _sendv(s__3c, 2, _1, _2);
 }
 _l9:;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info19= { ">=", "String", "/Users/piumarta/src/idst/object/st80/String.st", 0, 82, 84, &__info18 };
static oop String___3e_3d(oop v__closure, oop v_stateful_self, oop v_self, oop v_aString)
 {
  _enter(&__info19);
  oop _1= 0;
  oop _2= 0;
  _line(82);
  /* or: */
  _1= v_self;
  _2= v_aString;
  if (1 & (long)_1 & (long)_2) {
    _1= (((long)_1 == (long)_2) ? v_true : v_false);
  } else _1= _sendv(s__3d, 2, _1, _2);
  if (_1) goto _l10;
 {
  _1= v_self;
  _2= v_aString;
  if (1 & (long)_1 & (long)_2) {
    _1= (((long)_1 > (long)_2) ? v_true : v_false);
  } else _1= _sendv(s__3e, 2, _1, _2);
 }
 _l10:;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info20= { "strncmp_:_:_:", "String", "/Users/piumarta/src/idst/object/st80/String.st", 0, 84, 87, &__info19 };
static oop String__strncmp_5f__5f__5f_(oop v__closure, oop v_stateful_self, oop v_self, oop v__s1, oop v__s2, oop v__length)
 {
  _enter(&__info20);
  oop _1= 0;
  _line(84);
 {
# define self ((struct t_String *)v_self)
 return (oop)(long)(strncmp((char *)v__s1, (char *)v__s2, (long)v__length) << 1 | 1); 
# undef self
 }
  _1= 0;
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info23= { "[] asByteArray", "String", "/Users/piumarta/src/idst/object/st80/String.st", 0, 87, 96, &__info20 };
static oop b_23(oop v__closure, oop v__self, oop v_index)
 {
  _enter(&__info23);
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  oop _4= 0;
  _line(91);
  _1= ((oop *)((struct t_BlockClosure *)((struct t_BlockClosure *)v__self)->v_state))[1];  /* byteArray */
  _2= v_index;
  _3= ((oop *)((struct t_BlockClosure *)((struct t_BlockClosure *)v__self)->v_state))[2];  /* self */
  _4= v_index;
  _line(91);
  _3=_sendv(s_byteAt_, 2, _3, _4);
  _line(91);
  _1=_sendv(s_at_put_, 3, _1, _2, _3);
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info21= { "asByteArray", "String", "/Users/piumarta/src/idst/object/st80/String.st", 0, 87, 96, &__info23 };
static oop String__asByteArray(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info21);
  oop _state1= _sendv(s_new_5f_, 2, v__vector, 6);
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  ((oop *)_state1)[3]= v_stateful_self;
  ((oop *)_state1)[2]= v_self;
  _line(87);
  _1= v_ByteArray;
  _2= ((oop *)_state1)[2];  /* self */
  _line(90);
  _2=_sendv(s_size, 1, _2);
  _line(90);
  _1=_sendv(s_new_, 2, _1, _2);
  ((oop *)_state1)[1]= _1;  /* byteArray */
  _1= l_22;
  _2= ((oop *)_state1)[2];  /* self */
  _line(91);
  _2=_sendv(s_size, 1, _2);
  /* Scope('index'->ArgumentVariableNode) */
  /* Scope('size'->SlotVariableNode 'self'->ArgumentVariableNode '_bytes'->SlotVariableNode 'stateful_self'->ArgumentVariableNode 'byteArray'->TemporaryVariableNode) */
  /* nil */
  /* 2 */
  /* 1 */
  _3= _sendv(s_function_5f_arity_5f_outer_state_nlr_5f_, 6, v_BlockClosure, (oop)b_23, 1, 0, ((oop *)_state1), 0);
  _line(91);
  _1=_sendv(s_to_do_, 3, _1, _2, _3);
  _1= ((oop *)_state1)[1];  /* byteArray */
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info24= { "at:put:", "ImmutableString", "/Users/piumarta/src/idst/object/st80/String.st", 0, 98, 100, &__info21 };
static oop ImmutableString__at_put_(oop v__closure, oop v_stateful_self, oop v_self, oop v_anInteger, oop v_aChar)
 {
  _enter(&__info24);
  oop _1= 0;
  _line(98);
  _1= v_self;
  _line(98);
  _1=_sendv(s_errorImmutable, 1, _1);
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info25= { "value_:", "ImmutableString", "/Users/piumarta/src/idst/object/st80/String.st", 0, 100, 109, &__info24 };
static oop ImmutableString__value_5f_(oop v__closure, oop v_stateful_self, oop v_self, oop v__cString)
 {
  _enter(&__info25);
  oop _1= 0;
  _line(100);
  _1= v_self;
  _line(102);
  _1=_sendv(s__5fclone, 1, _1);
  v_self= _1;
  v_stateful_self= _1;
 {
# define self ((struct t_ImmutableString *)v_self)

      self->v_size= (oop)(long)((strlen((char *)v__cString) << 1) | 1);
      self->v__bytes= v__cString;
    
# undef self
 }
  _1= 0;
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info26= { "writeStream", "ImmutableString", "/Users/piumarta/src/idst/object/st80/String.st", 0, 109, 113, &__info25 };
static oop ImmutableString__writeStream(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info26);
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  _line(109);
  _1= v_String;
  _2= ((struct t_ImmutableString *)v_stateful_self)->v_size;
  _line(111);
  _1=_sendv(s_new_, 2, _1, _2);
  _2= l_27;
  _3= ((struct t_ImmutableString *)v_stateful_self)->v_size;
  _line(111);
  _1=_sendv(s_copyFrom_to_, 3, _1, _2, _3);
  _line(111);
  _1=_sendv(s_writeStream, 1, _1);
  _leave();
  return _1;
  _leave();
 }

static struct __methodinfo __info= { "__id__init__", "<initialisation>", "String.st", 0, 0, 0, &__info26 };
void __id__init__String(struct __libid *__libid)
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

  _sendv(s__5fimport_, 3, _libid->_object, "ByteArray", "__id__init__ByteArray");
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
  v_true= _libid->import("true");
  v_false= _libid->import("false");
  _libid->method(v_String, s_species, (_imp_t)String__species);
  _libid->method(v_String, s_at_, (_imp_t)String__at_);
  _libid->method(v_String, s_at_put_, (_imp_t)String__at_put_);
  l_5= _sendv(s_function_5f_arity_5f_, 3, v_StaticBlockClosure, b_5, 1);
  _libid->method(v_String, s_asUppercase, (_imp_t)String__asUppercase);
  l_7= _sendv(s_function_5f_arity_5f_, 3, v_StaticBlockClosure, b_7, 1);
  _libid->method(v_String, s_asLowercase, (_imp_t)String__asLowercase);
  _libid->method(v_String, s__5fstringValue, (_imp_t)String___5fstringValue);
  _libid->method(v_String, s_value_5f_, (_imp_t)String__value_5f_);
  _libid->method(v_Object, s_isString, (_imp_t)Object__isString);
  _libid->method(v_String, s_isString, (_imp_t)String__isString);
  l_13= _sendv(s_value_5f_, 2, v_SmallInteger, 0);
  _libid->method(v_String, s__3c, (_imp_t)String___3c);
  l_15= _sendv(s_value_5f_, 2, v_SmallInteger, 0);
  _libid->method(v_String, s__3d, (_imp_t)String___3d);
  l_17= _sendv(s_value_5f_, 2, v_SmallInteger, 0);
  _libid->method(v_String, s__3e, (_imp_t)String___3e);
  _libid->method(v_String, s__3c_3d, (_imp_t)String___3c_3d);
  _libid->method(v_String, s__3e_3d, (_imp_t)String___3e_3d);
  _libid->method(v_String, s_strncmp_5f__5f__5f_, (_imp_t)String__strncmp_5f__5f__5f_);
  l_22= _sendv(s_value_5f_, 2, v_SmallInteger, 1);
  _libid->method(v_String, s_asByteArray, (_imp_t)String__asByteArray);
  _libid->method(v_ImmutableString, s_at_put_, (_imp_t)ImmutableString__at_put_);
  _libid->method(v_ImmutableString, s_value_5f_, (_imp_t)ImmutableString__value_5f_);
  l_27= _sendv(s_value_5f_, 2, v_SmallInteger, 1);
  _libid->method(v_ImmutableString, s_writeStream, (_imp_t)ImmutableString__writeStream);
  _leave();
}
