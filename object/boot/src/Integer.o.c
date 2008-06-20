/* generated by Id 1.1 at � */
/* with the command: -I../stage1/ -c Integer.st -o ../stage2/Integer.o.c */

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

static oop s_asFloat= 0;
static oop s_value_5f_= 0;
static oop s_negative= 0;
static oop s__5fimport_= 0;
static oop s_print_= 0;
static oop s_print= 0;
static oop s_put= 0;
static oop s_negated= 0;
static oop s_normalize= 0;
static oop s_ifTrue_= 0;
static oop s__2b= 0;
static oop s__2f_2f= 0;
static oop s__2f= 0;
static oop s_nextPut_= 0;
static oop s_abs= 0;
static oop s__3d= 0;
static oop s__5c_5c= 0;
static oop s_digitDiv_neg_= 0;
static oop s_ifTrue_ifFalse_= 0;
static oop s_numerator_denominator_= 0;
static oop s_adaptToInteger_andSend_= 0;
static oop s_size_5f_value_5f_= 0;
static oop s__3c= 0;
static oop s_digitValue_= 0;
static oop s_printOn_radix_= 0;
static oop s_reduced= 0;
static oop s__3e_3d= 0;
static oop s_at_= 0;
static oop s__7e_7e= 0;
static oop s_isInteger= 0;
static oop s_asInteger= 0;
static struct _Selector { const char *name; oop *addr; } _Selectors[]= {
  { "asFloat", &s_asFloat },
  { "value_:", &s_value_5f_ },
  { "negative", &s_negative },
  { "_import:", &s__5fimport_ },
  { "print:", &s_print_ },
  { "print", &s_print },
  { "put", &s_put },
  { "negated", &s_negated },
  { "normalize", &s_normalize },
  { "ifTrue:", &s_ifTrue_ },
  { "+", &s__2b },
  { "//", &s__2f_2f },
  { "/", &s__2f },
  { "nextPut:", &s_nextPut_ },
  { "abs", &s_abs },
  { "=", &s__3d },
  { "\\\\", &s__5c_5c },
  { "digitDiv:neg:", &s_digitDiv_neg_ },
  { "ifTrue:ifFalse:", &s_ifTrue_ifFalse_ },
  { "numerator:denominator:", &s_numerator_denominator_ },
  { "adaptToInteger:andSend:", &s_adaptToInteger_andSend_ },
  { "size_:value_:", &s_size_5f_value_5f_ },
  { "<", &s__3c },
  { "digitValue:", &s_digitValue_ },
  { "printOn:radix:", &s_printOn_radix_ },
  { "reduced", &s_reduced },
  { ">=", &s__3e_3d },
  { "at:", &s_at_ },
  { "~~", &s__7e_7e },
  { "isInteger", &s_isInteger },
  { "asInteger", &s_asInteger },
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
static oop l_6= 0;
static oop l_7= 0;
static oop l_8= 0;
static oop l_9= 0;
static oop l_11= 0;
static oop l_12= 0;
static oop l_13= 0;
static oop l_14= 0;
static oop l_16= 0;
static oop l_17= 0;
static oop v__object= 0;
static oop v_Object= 0;
static oop v_UndefinedObject= 0;
static oop v_StaticBlockClosure= 0;
static oop v_Magnitude= 0;
static oop v_Character= 0;
static oop v_Number= 0;
static oop v_Fraction= 0;
static oop v_Float= 0;
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
static oop v_Symbol= 0;
static oop v_true= 0;
static oop v_false= 0;
static struct __methodinfo __info1= { "isInteger", "Object", "/Users/piumarta/src/idst/object/st80/Integer.st", 0, 23, 24, 0 };
static oop Object__isInteger(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info1);
  oop _1= 0;
  _line(23);
  _1= v_false;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info2= { "isInteger", "Integer", "/Users/piumarta/src/idst/object/st80/Integer.st", 0, 24, 26, &__info1 };
static oop Integer__isInteger(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info2);
  oop _1= 0;
  _line(24);
  _1= v_true;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info3= { "asInteger", "Integer", "/Users/piumarta/src/idst/object/st80/Integer.st", 0, 26, 28, &__info2 };
static oop Integer__asInteger(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info3);
  oop _1= 0;
  _line(26);
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info4= { "normalize", "Integer", "/Users/piumarta/src/idst/object/st80/Integer.st", 0, 28, 33, &__info3 };
static oop Integer__normalize(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info4);
  oop _1= 0;
  _line(28);
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info5= { "/", "Integer", "/Users/piumarta/src/idst/object/st80/Integer.st", 0, 33, 45, &__info4 };
static oop Integer___2f(oop v__closure, oop v_stateful_self, oop v_self, oop v_aNumber)
 {
  _enter(&__info5);
  oop v_quoRem= 0;
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  oop _4= 0;
  (void)v_quoRem;
  _line(33);
  /* ifTrue: */
  _1= 0;
  _2= v_aNumber;
  _line(36);
  _2=_sendv(s_isInteger, 1, _2);
  if (!_2) goto _l1;
 {
  _1= v_self;
  _2= v_aNumber;
  _line(38);
  _2=_sendv(s_abs, 1, _2);
  _3= v_self;
  _line(38);
  _3=_sendv(s_negative, 1, _3);
  _4= v_aNumber;
  _line(38);
  _4=_sendv(s_negative, 1, _4);
  _3= (_3 != _4) ? v_true : v_false;
  _line(38);
  _1=_sendv(s_digitDiv_neg_, 3, _1, _2, _3);
  v_quoRem= _1;
  /* ifTrue:ifFalse: */
  _1= v_quoRem;
  _2= l_6;
  _line(39);
  _1=_sendv(s_at_, 2, _1, _2);
  _2= l_7;
  if (1 & (long)_1) {
    _1= (((long)_1 == (long)_2) ? v_true : v_false);
  } else _1= _sendv(s__3d, 2, _1, _2);
  if (!_1) goto _l2;
 {
  _1= v_quoRem;
  _2= l_8;
  _line(40);
  _1=_sendv(s_at_, 2, _1, _2);
  _line(40);
  _1=_sendv(s_normalize, 1, _1);
 }
  goto _l3;
 _l2:;
 {
  _1= v_Fraction;
  _2= v_self;
  _3= v_aNumber;
  _line(41);
  _1=_sendv(s_numerator_denominator_, 3, _1, _2, _3);
  _line(41);
  _1=_sendv(s_reduced, 1, _1);
 }
 _l3:;
  _leave();
  return _1;
 }
 _l1:;
  _1= v_aNumber;
  _2= v_self;
  _3= l_9;
  _line(42);
  _1=_sendv(s_adaptToInteger_andSend_, 3, _1, _2, _3);
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info10= { "print", "Integer", "/Users/piumarta/src/idst/object/st80/Integer.st", 0, 45, 54, &__info5 };
static oop Integer__print(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info10);
  oop v_n= 0;
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  oop _4= 0;
  (void)v_n;
  _line(45);
  _1= l_11;
  v_n= _1;
  /* ifTrue: */
  _1= 0;
  _2= v_self;
  _3= l_11;
  if (1 & (long)_2) {
    _2= (((long)_2 < (long)_3) ? v_true : v_false);
  } else _2= _sendv(s__3c, 2, _2, _3);
  if (!_2) goto _l4;
 {
  _1= l_12;
  _line(49);
  _1=_sendv(s_put, 1, _1);
  _1= l_13;
  _2= v_self;
  _line(49);
  _2=_sendv(s_negated, 1, _2);
  _line(49);
  _2=_sendv(s_print, 1, _2);
  {
    int _l= (long)_1 >> 1;
    int _r= (long)_2 >> 1;
    int _s= _l + _r;
    if ((1 & (long)_2) && ((_s ^ (_s << 1)) >= 0))  _1= (oop)(long)(_s << 1 | 1);  else _1= _sendv(s__2b, 2, _1, _2);
  }
  _leave();
  return _1;
 }
 _l4:;
  /* ifTrue: */
  _1= 0;
  _2= v_self;
  _3= l_14;
  if (1 & (long)_2) {
    _2= (((long)_2 >= (long)_3) ? v_true : v_false);
  } else _2= _sendv(s__3e_3d, 2, _2, _3);
  if (!_2) goto _l5;
 {
  _1= v_n;
  _2= v_self;
  _3= l_14;
  _2= _sendv(s__2f_2f, 2, _2, _3);
  _line(50);
  _2=_sendv(s_print, 1, _2);
  {
    int _l= (long)_1 >> 1;
    int _r= (long)_2 >> 1;
    int _s= _l + _r;
    if ((1 & (long)_1 & (long)_2) && ((_s ^ (_s << 1)) >= 0))  _1= (oop)(long)(_s << 1 | 1);  else _1= _sendv(s__2b, 2, _1, _2);
  }
  v_n= _1;
 }
 _l5:;
  _1= v_n;
  _2= v_Character;
  _3= v_self;
  _4= l_14;
  _3= _sendv(s__5c_5c, 2, _3, _4);
  _line(51);
  _2=_sendv(s_digitValue_, 2, _2, _3);
  _line(51);
  _2=_sendv(s_put, 1, _2);
  {
    int _l= (long)_1 >> 1;
    int _r= (long)_2 >> 1;
    int _s= _l + _r;
    if ((1 & (long)_1 & (long)_2) && ((_s ^ (_s << 1)) >= 0))  _1= (oop)(long)(_s << 1 | 1);  else _1= _sendv(s__2b, 2, _1, _2);
  }
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info15= { "printOn:radix:", "Integer", "/Users/piumarta/src/idst/object/st80/Integer.st", 0, 54, 63, &__info10 };
static oop Integer__printOn_radix_(oop v__closure, oop v_stateful_self, oop v_self, oop v_aStream, oop v_radix)
 {
  _enter(&__info15);
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  oop _4= 0;
  _line(54);
  /* ifTrue: */
  _1= 0;
  _2= v_self;
  _3= l_16;
  if (1 & (long)_2) {
    _2= (((long)_2 < (long)_3) ? v_true : v_false);
  } else _2= _sendv(s__3c, 2, _2, _3);
  if (!_2) goto _l6;
 {
  _1= v_aStream;
  _2= l_17;
  _line(56);
  _sendv(s_nextPut_, 2, _1, _2);
  _2= v_self;
  _line(56);
  _2=_sendv(s_negated, 1, _2);
  _1=_sendv(s_print_, 2, _1, _2);
  _leave();
  return _1;
 }
 _l6:;
  /* ifTrue: */
  _1= 0;
  _2= v_self;
  _3= v_radix;
  if (1 & (long)_2 & (long)_3) {
    _2= (((long)_2 >= (long)_3) ? v_true : v_false);
  } else _2= _sendv(s__3e_3d, 2, _2, _3);
  if (!_2) goto _l7;
 {
  _1= v_self;
  _2= v_radix;
  _1= _sendv(s__2f_2f, 2, _1, _2);
  _2= v_aStream;
  _3= v_radix;
  _line(57);
  _1=_sendv(s_printOn_radix_, 3, _1, _2, _3);
 }
 _l7:;
  _1= v_aStream;
  _2= v_Character;
  _3= v_self;
  _4= v_radix;
  _3= _sendv(s__5c_5c, 2, _3, _4);
  _line(58);
  _2=_sendv(s_digitValue_, 2, _2, _3);
  _line(58);
  _1=_sendv(s_nextPut_, 2, _1, _2);
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info18= { "numerator:denominator:", "Fraction", "/Users/piumarta/src/idst/object/st80/Integer.st", 0, 63, 65, &__info15 };
static oop Fraction__numerator_denominator_(oop v__closure, oop v_stateful_self, oop v_self, oop v_n, oop v_d)
 {
  _enter(&__info18);
  oop _1= 0;
  oop _2= 0;
  _line(63);
  _1= v_n;
  _line(63);
  _1=_sendv(s_asFloat, 1, _1);
  _2= v_d;
  _line(63);
  _2=_sendv(s_asFloat, 1, _2);
  _line(63);
  _1=_sendv(s__2f, 2, _1, _2);
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info19= { "reduced", "Float", "/Users/piumarta/src/idst/object/st80/Integer.st", 0, 65, 66, &__info18 };
static oop Float__reduced(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info19);
  oop _1= 0;
  _line(65);
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }

static struct __methodinfo __info= { "__id__init__", "<initialisation>", "Integer.st", 0, 0, 0, &__info19 };
void __id__init__Integer(struct __libid *__libid)
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

  _sendv(s__5fimport_, 3, _libid->_object, "Number", "__id__init__Number");
  v__object= _libid->import("_object");
  v_Object= _libid->import("Object");
  v_UndefinedObject= _libid->import("UndefinedObject");
  v_StaticBlockClosure= _libid->import("StaticBlockClosure");
  v_Magnitude= _libid->import("Magnitude");
  v_Character= _libid->import("Character");
  v_Number= _libid->import("Number");
  v_Fraction= _libid->import("Fraction");
  v_Float= _libid->import("Float");
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
  v_Symbol= _libid->import("Symbol");
  v_true= _libid->import("true");
  v_false= _libid->import("false");
  _libid->method(v_Object, s_isInteger, (_imp_t)Object__isInteger);
  _libid->method(v_Integer, s_isInteger, (_imp_t)Integer__isInteger);
  _libid->method(v_Integer, s_asInteger, (_imp_t)Integer__asInteger);
  _libid->method(v_Integer, s_normalize, (_imp_t)Integer__normalize);
  l_6= _sendv(s_value_5f_, 2, v_SmallInteger, 2);
  l_7= _sendv(s_value_5f_, 2, v_SmallInteger, 0);
  l_8= _sendv(s_value_5f_, 2, v_SmallInteger, 1);
  l_9= _sendv(s_size_5f_value_5f_, 3, v_Symbol, 1, "/");
  _libid->method(v_Integer, s__2f, (_imp_t)Integer___2f);
  l_11= _sendv(s_value_5f_, 2, v_SmallInteger, 0);
  l_12= _sendv(s_value_5f_, 2, v_Character, 45);
  l_13= _sendv(s_value_5f_, 2, v_SmallInteger, 1);
  l_14= _sendv(s_value_5f_, 2, v_SmallInteger, 10);
  _libid->method(v_Integer, s_print, (_imp_t)Integer__print);
  l_16= _sendv(s_value_5f_, 2, v_SmallInteger, 0);
  l_17= _sendv(s_value_5f_, 2, v_Character, 45);
  _libid->method(v_Integer, s_printOn_radix_, (_imp_t)Integer__printOn_radix_);
  _libid->method(v_Fraction, s_numerator_denominator_, (_imp_t)Fraction__numerator_denominator_);
  _libid->method(v_Float, s_reduced, (_imp_t)Float__reduced);
  _leave();
}
