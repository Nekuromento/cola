/* generated by Id 1.1 at ,$ */
/* with the command: -I../stage1/ -c WordArray.st -o ../stage2/WordArray.o.c */

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

static oop s__3c_3d= 0;
static oop s_value_5f_= 0;
static oop s_species= 0;
static oop s__5fimport_= 0;
static oop s_ifFalse_= 0;
static oop s_integerAt_= 0;
static oop s__5felements= 0;
static oop s__2d= 0;
static oop s__2b= 0;
static oop s__5fat_= 0;
static oop s_size= 0;
static oop s__3d_3d= 0;
static oop s__5fnewWords_= 0;
static oop s__5fat_put_5f_= 0;
static oop s__5fclone= 0;
static oop s_isSmallInteger= 0;
static oop s_initialize_= 0;
static oop s_isWordArray= 0;
static oop s_primitiveFailed= 0;
static oop s_and_= 0;
static oop s_isLargePositiveInteger= 0;
static oop s__3e= 0;
static oop s_digitLength= 0;
static oop s__5fintegerValue= 0;
static oop s__5fwords= 0;
static oop s_elementSize= 0;
static oop s_replaceFrom_to_with_startingAt_= 0;
static oop s_replaceFrom_5f_for_5f_with_5f_startingAt_5f_= 0;
static oop s_size_5f_value_5f_= 0;
static oop s_errorImmutable= 0;
static oop s_at_= 0;
static oop s_at_put_= 0;
static struct _Selector { const char *name; oop *addr; } _Selectors[]= {
  { "<=", &s__3c_3d },
  { "value_:", &s_value_5f_ },
  { "species", &s_species },
  { "_import:", &s__5fimport_ },
  { "ifFalse:", &s_ifFalse_ },
  { "integerAt:", &s_integerAt_ },
  { "_elements", &s__5felements },
  { "-", &s__2d },
  { "+", &s__2b },
  { "_at:", &s__5fat_ },
  { "size", &s_size },
  { "==", &s__3d_3d },
  { "_newWords:", &s__5fnewWords_ },
  { "_at:put_:", &s__5fat_put_5f_ },
  { "_clone", &s__5fclone },
  { "isSmallInteger", &s_isSmallInteger },
  { "initialize:", &s_initialize_ },
  { "isWordArray", &s_isWordArray },
  { "primitiveFailed", &s_primitiveFailed },
  { "and:", &s_and_ },
  { "isLargePositiveInteger", &s_isLargePositiveInteger },
  { ">", &s__3e },
  { "digitLength", &s_digitLength },
  { "_integerValue", &s__5fintegerValue },
  { "_words", &s__5fwords },
  { "elementSize", &s_elementSize },
  { "replaceFrom:to:with:startingAt:", &s_replaceFrom_to_with_startingAt_ },
  { "replaceFrom_:for_:with_:startingAt_:", &s_replaceFrom_5f_for_5f_with_5f_startingAt_5f_ },
  { "size_:value_:", &s_size_5f_value_5f_ },
  { "errorImmutable", &s_errorImmutable },
  { "at:", &s_at_ },
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
static oop l_9= 0;
static oop l_10= 0;
static oop l_16= 0;
static oop v__object= 0;
static oop v_Object= 0;
static oop v_UndefinedObject= 0;
static oop v_StaticBlockClosure= 0;
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
static oop v_ImmutableWordArray= 0;
static oop v_ByteArray= 0;
static oop v_String= 0;
static oop v_ImmutableString= 0;
static oop v_true= 0;
static oop v_false= 0;
static struct __methodinfo __info1= { "species", "WordArray", "/Users/piumarta/src/idst/object/st80/WordArray.st", 0, 25, 27, 0 };
static oop WordArray__species(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info1);
  oop _1= 0;
  _line(25);
  _1= v_WordArray;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info2= { "isWordArray", "Object", "/Users/piumarta/src/idst/object/st80/WordArray.st", 0, 27, 28, &__info1 };
static oop Object__isWordArray(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info2);
  oop _1= 0;
  _line(27);
  _1= v_false;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info3= { "isWordArray", "WordArray", "/Users/piumarta/src/idst/object/st80/WordArray.st", 0, 28, 30, &__info2 };
static oop WordArray__isWordArray(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info3);
  oop _1= 0;
  _line(28);
  _1= v_true;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info4= { "initialize:", "WordArray", "/Users/piumarta/src/idst/object/st80/WordArray.st", 0, 30, 36, &__info3 };
static oop WordArray__initialize_(oop v__closure, oop v_stateful_self, oop v_self, oop v_anInteger)
 {
  _enter(&__info4);
  oop _1= 0;
  oop _2= 0;
  _line(30);
  _1= v_self;
  _2= v_anInteger;
  _line(32);
  _1=_superv(v_ArrayedCollection, s_initialize_, 2, _1, _2);
  _1= v_self;
  _2= v_anInteger;
  _line(33);
  _1=_sendv(s__5fnewWords_, 2, _1, _2);
  ((struct t_WordArray *)v_stateful_self)->v__words= _1;
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info5= { "_words", "WordArray", "/Users/piumarta/src/idst/object/st80/WordArray.st", 0, 36, 37, &__info4 };
static oop WordArray___5fwords(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info5);
  oop _1= 0;
  _line(36);
  _1= ((struct t_WordArray *)v_stateful_self)->v__words;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info6= { "_elements", "WordArray", "/Users/piumarta/src/idst/object/st80/WordArray.st", 0, 37, 39, &__info5 };
static oop WordArray___5felements(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info6);
  oop _1= 0;
  _line(37);
  _1= ((struct t_WordArray *)v_stateful_self)->v__words;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info7= { "at:", "WordArray", "/Users/piumarta/src/idst/object/st80/WordArray.st", 0, 39, 57, &__info6 };
static oop WordArray__at_(oop v__closure, oop v_stateful_self, oop v_self, oop v_anInteger)
 {
  _enter(&__info7);
  oop v__w= 0;
  oop _1= 0;
  oop _2= 0;
  (void)v__w;
  _line(39);
 {
# define self ((struct t_WordArray *)v_self)
 unsigned int w;
      if (((long)v_anInteger & 1) && ((long)v_anInteger > 1) && ((long)v_anInteger <= (long)self->v_size))
        w= (((unsigned int *)self->v__words)[((long)v_anInteger >> 1) - 1]);
      else
#ifdef _sendv
	return _sendv(s_primitiveFailed, 1, v_self);
#else
	return _send(s_primitiveFailed, v_self);
#endif
      if (!(w & 0xc0000000)) return (oop)(long)(w << 1 | 1);
      v__w= (oop)(long)w;
    
# undef self
 }
  _1= 0;
  _1= v_LargePositiveInteger;
  _2= v__w;
  _line(54);
  _1=_sendv(s_value_5f_, 2, _1, _2);
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info8= { "at:put:", "WordArray", "/Users/piumarta/src/idst/object/st80/WordArray.st", 0, 57, 74, &__info7 };
static oop WordArray__at_put_(oop v__closure, oop v_stateful_self, oop v_self, oop v_anInteger, oop v_aWord)
 {
  _enter(&__info8);
  oop v__w= 0;
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  (void)v__w;
  _line(57);
 {
# define self ((struct t_WordArray *)v_self)

      if (((long)v_anInteger & 1) && ((long)v_anInteger > 1) && ((long)v_anInteger <= (long)self->v_size) && ((long)v_aWord & 1))
        {
          ((unsigned int *)self->v__words)[((long)v_anInteger >> 1) - 1]= (unsigned int)(long)v_aWord >> 1;
          return v_aWord;
        }
    
# undef self
 }
  _1= 0;
  /* ifFalse: */
  _1= 0;
  /* and: */
  _2= v_anInteger;
  _line(67);
  _2=_sendv(s_isSmallInteger, 1, _2);
  if (!_2) goto _l2;
 {
  /* and: */
  _2= v_anInteger;
  _3= l_9;
  if (1 & (long)_2) {
    _2= (((long)_2 > (long)_3) ? v_true : v_false);
  } else _2= _sendv(s__3e, 2, _2, _3);
  if (!_2) goto _l3;
 {
  _2= v_anInteger;
  _3= ((struct t_WordArray *)v_stateful_self)->v_size;
  if (1 & (long)_2 & (long)_3) {
    _2= (((long)_2 <= (long)_3) ? v_true : v_false);
  } else _2= _sendv(s__3c_3d, 2, _2, _3);
 }
 _l3:;
 }
 _l2:;
  if (_2) goto _l1;
 {
  _1= v_self;
  _line(67);
  _1=_sendv(s_primitiveFailed, 1, _1);
  _leave();
  return _1;
 }
 _l1:;
  /* ifFalse: */
  _1= 0;
  /* and: */
  _2= v_aWord;
  _line(68);
  _2=_sendv(s_isLargePositiveInteger, 1, _2);
  if (!_2) goto _l5;
 {
  _2= v_aWord;
  _line(68);
  _2=_sendv(s_digitLength, 1, _2);
  _3= l_10;
  _2= (_2 == _3) ? v_true : v_false;
 }
 _l5:;
  if (_2) goto _l4;
 {
  _1= v_self;
  _line(68);
  _1=_sendv(s_primitiveFailed, 1, _1);
  _leave();
  return _1;
 }
 _l4:;
  _1= v_aWord;
  _line(69);
  _1=_sendv(s__5fintegerValue, 1, _1);
  v__w= _1;
 {
# define self ((struct t_WordArray *)v_self)
 ((unsigned int *)self->v__words)[((long)v_anInteger >> 1) - 1]= (unsigned int)(long)v__w; 
# undef self
 }
  _1= 0;
  _1= v_aWord;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info11= { "integerAt:", "WordArray", "/Users/piumarta/src/idst/object/st80/WordArray.st", 0, 74, 82, &__info8 };
static oop WordArray__integerAt_(oop v__closure, oop v_stateful_self, oop v_self, oop v_anInteger)
 {
  _enter(&__info11);
  oop _1= 0;
  _line(74);
 {
# define self ((struct t_WordArray *)v_self)
 if (((long)v_anInteger & 1) && ((long)v_anInteger > 1) && ((long)v_anInteger <= (long)self->v_size)) {
        int w= (((unsigned int *)self->v__words)[((long)v_anInteger >> 1) - 1]);
        if ((w ^ (w << 1)) >= 0) return (oop)(long)(w << 1 | 1); } 
# undef self
 }
  _1= 0;
  _1= v_self;
  _line(79);
  _1=_sendv(s_primitiveFailed, 1, _1);
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info12= { "_at:", "WordArray", "/Users/piumarta/src/idst/object/st80/WordArray.st", 0, 82, 89, &__info11 };
static oop WordArray___5fat_(oop v__closure, oop v_stateful_self, oop v_self, oop v_anInteger)
 {
  _enter(&__info12);
  oop _1= 0;
  _line(82);
 {
# define self ((struct t_WordArray *)v_self)
 if (((long)v_anInteger & 1) && ((long)v_anInteger > 1) && ((long)v_anInteger <= (long)self->v_size))
        return (oop)(long)(((unsigned int *)self->v__words)[((long)v_anInteger >> 1) - 1]); 
# undef self
 }
  _1= 0;
  _1= v_self;
  _line(86);
  _1=_sendv(s_primitiveFailed, 1, _1);
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info13= { "_at:put_:", "WordArray", "/Users/piumarta/src/idst/object/st80/WordArray.st", 0, 89, 101, &__info12 };
static oop WordArray___5fat_put_5f_(oop v__closure, oop v_stateful_self, oop v_self, oop v_anInteger, oop v__word)
 {
  _enter(&__info13);
  oop _1= 0;
  _line(89);
 {
# define self ((struct t_WordArray *)v_self)

      if (((long)v_anInteger & 1) && ((long)v_anInteger > 1) && ((long)v_anInteger <= (long)self->v_size))
        {
          ((unsigned int *)self->v__words)[((long)v_anInteger >> 1) - 1]= (unsigned int)(long)v__word;
          return v__word;
        }
    
# undef self
 }
  _1= 0;
  _1= v_self;
  _line(98);
  _1=_sendv(s_primitiveFailed, 1, _1);
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info14= { "elementSize", "WordArray", "/Users/piumarta/src/idst/object/st80/WordArray.st", 0, 101, 107, &__info13 };
static oop WordArray__elementSize(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info14);
  oop _1= 0;
  _line(101);
 {
# define self ((struct t_WordArray *)v_self)

    return (oop)(long)(sizeof(unsigned int) << 1 | 1);

# undef self
 }
  _1= 0;
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info15= { "replaceFrom:to:with:startingAt:", "WordArray", "/Users/piumarta/src/idst/object/st80/WordArray.st", 0, 107, 124, &__info14 };
static oop WordArray__replaceFrom_to_with_startingAt_(oop v__closure, oop v_stateful_self, oop v_self, oop v_first, oop v_last, oop v_words, oop v_offset)
 {
  _enter(&__info15);
  oop v_count= 0;
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  oop _4= 0;
  oop _5= 0;
  (void)v_count;
  _line(107);
  _1= v_last;
  _2= v_first;
  {
    int _l= (long)_1 >> 1;
    int _r= (long)_2 >> 1;
    int _s= (_l - _r);
    if ((1 & (long)_1 & (long)_2) && ((_s ^ (_s << 1)) >= 0))  _1= (oop)(long)(_s << 1 | 1);  else _1= _sendv(s__2d, 2, _1, _2);
  }
  _2= l_16;
  {
    int _l= (long)_1 >> 1;
    int _r= (long)_2 >> 1;
    int _s= _l + _r;
    if ((1 & (long)_1) && ((_s ^ (_s << 1)) >= 0))  _1= (oop)(long)(_s << 1 | 1);  else _1= _sendv(s__2b, 2, _1, _2);
  }
  v_count= _1;
  /* ifFalse: */
  _1= 0;
  /* and: */
  _2= v_words;
  _line(111);
  _2=_sendv(s_isWordArray, 1, _2);
  if (!_2) goto _l7;
 {
  /* and: */
  _2= l_16;
  _3= v_first;
  if (1 & (long)_3) {
    _2= (((long)_2 <= (long)_3) ? v_true : v_false);
  } else _2= _sendv(s__3c_3d, 2, _2, _3);
  if (!_2) goto _l8;
 {
  /* and: */
  _2= v_first;
  _3= v_last;
  if (1 & (long)_2 & (long)_3) {
    _2= (((long)_2 <= (long)_3) ? v_true : v_false);
  } else _2= _sendv(s__3c_3d, 2, _2, _3);
  if (!_2) goto _l9;
 {
  /* and: */
  _2= v_last;
  _3= v_self;
  _line(114);
  _3=_sendv(s_size, 1, _3);
  if (1 & (long)_2 & (long)_3) {
    _2= (((long)_2 <= (long)_3) ? v_true : v_false);
  } else _2= _sendv(s__3c_3d, 2, _2, _3);
  if (!_2) goto _l10;
 {
  /* and: */
  _2= l_16;
  _3= v_offset;
  if (1 & (long)_3) {
    _2= (((long)_2 <= (long)_3) ? v_true : v_false);
  } else _2= _sendv(s__3c_3d, 2, _2, _3);
  if (!_2) goto _l11;
 {
  _2= v_offset;
  _3= v_count;
  {
    int _l= (long)_2 >> 1;
    int _r= (long)_3 >> 1;
    int _s= _l + _r;
    if ((1 & (long)_2 & (long)_3) && ((_s ^ (_s << 1)) >= 0))  _2= (oop)(long)(_s << 1 | 1);  else _2= _sendv(s__2b, 2, _2, _3);
  }
  _3= l_16;
  {
    int _l= (long)_2 >> 1;
    int _r= (long)_3 >> 1;
    int _s= (_l - _r);
    if ((1 & (long)_2) && ((_s ^ (_s << 1)) >= 0))  _2= (oop)(long)(_s << 1 | 1);  else _2= _sendv(s__2d, 2, _2, _3);
  }
  _3= v_words;
  _line(116);
  _3=_sendv(s_size, 1, _3);
  if (1 & (long)_2 & (long)_3) {
    _2= (((long)_2 <= (long)_3) ? v_true : v_false);
  } else _2= _sendv(s__3c_3d, 2, _2, _3);
 }
 _l11:;
 }
 _l10:;
 }
 _l9:;
 }
 _l8:;
 }
 _l7:;
  if (_2) goto _l6;
 {
  _1= v_self;
  _2= v_first;
  _3= v_last;
  _4= v_words;
  _5= v_offset;
  _line(117);
  _1=_superv(v_ArrayedCollection, s_replaceFrom_to_with_startingAt_, 5, _1, _2, _3, _4, _5);
  _leave();
  return _1;
 }
 _l6:;
  _1= v_self;
  _2= v_first;
  _line(118);
  _2=_sendv(s__5fintegerValue, 1, _2);
  _3= v_count;
  _line(119);
  _3=_sendv(s__5fintegerValue, 1, _3);
  _4= v_words;
  _line(120);
  _4=_sendv(s__5fwords, 1, _4);
  _5= v_offset;
  _line(121);
  _5=_sendv(s__5fintegerValue, 1, _5);
  _line(118);
  _1=_sendv(s_replaceFrom_5f_for_5f_with_5f_startingAt_5f_, 5, _1, _2, _3, _4, _5);
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info17= { "replaceFrom_:for_:with_:startingAt_:", "WordArray", "/Users/piumarta/src/idst/object/st80/WordArray.st", 0, 124, 132, &__info15 };
static oop WordArray__replaceFrom_5f_for_5f_with_5f_startingAt_5f_(oop v__closure, oop v_stateful_self, oop v_self, oop v__first, oop v__count, oop v__source, oop v__offset)
 {
  _enter(&__info17);
  oop _1= 0;
  _line(124);
 {
# define self ((struct t_WordArray *)v_self)

    memcpy((char *)self->v__words + sizeof(unsigned int) * ((long)v__first - 1),
	   (char *)v__source + sizeof(unsigned int) * ((long)v__offset - 1),
	   sizeof(unsigned int) * (long)v__count);

# undef self
 }
  _1= 0;
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info18= { "size_:value_:", "ImmutableWordArray", "/Users/piumarta/src/idst/object/st80/WordArray.st", 0, 134, 141, &__info17 };
static oop ImmutableWordArray__size_5f_value_5f_(oop v__closure, oop v_stateful_self, oop v_self, oop v__size, oop v__value)
 {
  _enter(&__info18);
  oop _1= 0;
  oop _2= 0;
  _line(134);
  _1= v_self;
  _line(136);
  _1=_sendv(s__5fclone, 1, _1);
  v_self= _1;
  v_stateful_self= _1;
  _1= v_SmallInteger;
  _2= v__size;
  _line(137);
  _1=_sendv(s_value_5f_, 2, _1, _2);
  ((struct t_ImmutableWordArray *)v_stateful_self)->v_size= _1;
  _1= v__value;
  ((struct t_ImmutableWordArray *)v_stateful_self)->v__words= _1;
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info19= { "at:put:", "ImmutableWordArray", "/Users/piumarta/src/idst/object/st80/WordArray.st", 0, 141, 146, &__info18 };
static oop ImmutableWordArray__at_put_(oop v__closure, oop v_stateful_self, oop v_self, oop v_anInteger, oop v_aWord)
 {
  _enter(&__info19);
  oop _1= 0;
  _line(141);
  _1= v_self;
  _line(143);
  _1=_sendv(s_errorImmutable, 1, _1);
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info20= { "replaceFrom:to:with:startingAt:", "ImmutableWordArray", "/Users/piumarta/src/idst/object/st80/WordArray.st", 0, 146, 150, &__info19 };
static oop ImmutableWordArray__replaceFrom_to_with_startingAt_(oop v__closure, oop v_stateful_self, oop v_self, oop v_first, oop v_last, oop v_aCollection, oop v_offset)
 {
  _enter(&__info20);
  oop _1= 0;
  _line(146);
  _1= v_self;
  _line(148);
  _1=_sendv(s_errorImmutable, 1, _1);
  _leave();
  return _1;
  _leave();
 }

static struct __methodinfo __info= { "__id__init__", "<initialisation>", "WordArray.st", 0, 0, 0, &__info20 };
void __id__init__WordArray(struct __libid *__libid)
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

  _sendv(s__5fimport_, 3, _libid->_object, "ArrayedCollection", "__id__init__ArrayedCollection");
  v__object= _libid->import("_object");
  v_Object= _libid->import("Object");
  v_UndefinedObject= _libid->import("UndefinedObject");
  v_StaticBlockClosure= _libid->import("StaticBlockClosure");
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
  v_ImmutableWordArray= _libid->import("ImmutableWordArray");
  v_ByteArray= _libid->import("ByteArray");
  v_String= _libid->import("String");
  v_ImmutableString= _libid->import("ImmutableString");
  v_true= _libid->import("true");
  v_false= _libid->import("false");
  _libid->method(v_WordArray, s_species, (_imp_t)WordArray__species);
  _libid->method(v_Object, s_isWordArray, (_imp_t)Object__isWordArray);
  _libid->method(v_WordArray, s_isWordArray, (_imp_t)WordArray__isWordArray);
  _libid->method(v_WordArray, s_initialize_, (_imp_t)WordArray__initialize_);
  _libid->method(v_WordArray, s__5fwords, (_imp_t)WordArray___5fwords);
  _libid->method(v_WordArray, s__5felements, (_imp_t)WordArray___5felements);
  _libid->method(v_WordArray, s_at_, (_imp_t)WordArray__at_);
  l_9= _sendv(s_value_5f_, 2, v_SmallInteger, 0);
  l_10= _sendv(s_value_5f_, 2, v_SmallInteger, 4);
  _libid->method(v_WordArray, s_at_put_, (_imp_t)WordArray__at_put_);
  _libid->method(v_WordArray, s_integerAt_, (_imp_t)WordArray__integerAt_);
  _libid->method(v_WordArray, s__5fat_, (_imp_t)WordArray___5fat_);
  _libid->method(v_WordArray, s__5fat_put_5f_, (_imp_t)WordArray___5fat_put_5f_);
  _libid->method(v_WordArray, s_elementSize, (_imp_t)WordArray__elementSize);
  l_16= _sendv(s_value_5f_, 2, v_SmallInteger, 1);
  _libid->method(v_WordArray, s_replaceFrom_to_with_startingAt_, (_imp_t)WordArray__replaceFrom_to_with_startingAt_);
  _libid->method(v_WordArray, s_replaceFrom_5f_for_5f_with_5f_startingAt_5f_, (_imp_t)WordArray__replaceFrom_5f_for_5f_with_5f_startingAt_5f_);
  _libid->method(v_ImmutableWordArray, s_size_5f_value_5f_, (_imp_t)ImmutableWordArray__size_5f_value_5f_);
  _libid->method(v_ImmutableWordArray, s_at_put_, (_imp_t)ImmutableWordArray__at_put_);
  _libid->method(v_ImmutableWordArray, s_replaceFrom_to_with_startingAt_, (_imp_t)ImmutableWordArray__replaceFrom_to_with_startingAt_);
  _leave();
}
