/* generated by Id 1.1 at ,$ */
/* with the command: -I../stage1/ -c PositionableStream.st -o ../stage2/PositionableStream.o.c */

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
static oop s_new_= 0;
static oop s_new_5f_= 0;
static oop s_collection= 0;
static oop s_value_5f_= 0;
static oop s_species= 0;
static oop s__5fimport_= 0;
static oop s_on_= 0;
static oop s_atEnd= 0;
static oop s_skip_= 0;
static oop s__5fslots= 0;
static oop s_ifTrue_= 0;
static oop s__2b= 0;
static oop s__2d= 0;
static oop s_to_do_= 0;
static oop s_size= 0;
static oop s_position_= 0;
static oop s_reset= 0;
static oop s_ifTrue_ifFalse_= 0;
static oop s__5fdebugName= 0;
static oop s_between_and_= 0;
static oop s_new= 0;
static oop s_positionError= 0;
static oop s_copyFrom_to_= 0;
static oop s_peek= 0;
static oop s_function_5f_arity_5f_outer_state_nlr_5f_= 0;
static oop s_size_5f_value_5f_= 0;
static oop s_next_= 0;
static oop s__3e_3d= 0;
static oop s_error_= 0;
static oop s__5fsizeof= 0;
static oop s_at_put_= 0;
static oop s_contents= 0;
static struct _Selector { const char *name; oop *addr; } _Selectors[]= {
  { "next", &s_next },
  { "new:", &s_new_ },
  { "new_:", &s_new_5f_ },
  { "collection", &s_collection },
  { "value_:", &s_value_5f_ },
  { "species", &s_species },
  { "_import:", &s__5fimport_ },
  { "on:", &s_on_ },
  { "atEnd", &s_atEnd },
  { "skip:", &s_skip_ },
  { "_slots", &s__5fslots },
  { "ifTrue:", &s_ifTrue_ },
  { "+", &s__2b },
  { "-", &s__2d },
  { "to:do:", &s_to_do_ },
  { "size", &s_size },
  { "position:", &s_position_ },
  { "reset", &s_reset },
  { "ifTrue:ifFalse:", &s_ifTrue_ifFalse_ },
  { "_debugName", &s__5fdebugName },
  { "between:and:", &s_between_and_ },
  { "new", &s_new },
  { "positionError", &s_positionError },
  { "copyFrom:to:", &s_copyFrom_to_ },
  { "peek", &s_peek },
  { "function_:arity_:outer:state:nlr_:", &s_function_5f_arity_5f_outer_state_nlr_5f_ },
  { "size_:value_:", &s_size_5f_value_5f_ },
  { "next:", &s_next_ },
  { ">=", &s__3e_3d },
  { "error:", &s_error_ },
  { "_sizeof", &s__5fsizeof },
  { "at:put:", &s_at_put_ },
  { "contents", &s_contents },
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
struct t_OrderedCollection {
  struct _vtable *_vtable[0];
  oop v_array;
  oop v_firstIndex;
  oop v_lastIndex;
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
static oop l_2= 0;
static oop l_4= 0;
static oop l_7= 0;
static oop l_11= 0;
static oop l_14= 0;
static oop l_16= 0;
static oop l_19= 0;
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
static oop v_Stream= 0;
static oop v_PositionableStream= 0;
static size_t PositionableStream___5fsizeof(oop _closure, oop v_self) { return sizeof(struct t_PositionableStream); }
static char *PositionableStream___5fdebugName(oop _closure, oop v_self) { return "PositionableStream"; }
static struct __slotinfo *PositionableStream___5fslots(oop _closure, oop v_self) { static struct __slotinfo info[]= { { "collection", 0, 4 }, { "position", 4, 4 }, { "readLimit", 8, 4 }, { 0, 0, 0 } };  return &info[0]; }
static struct __methodinfo __info1= { "on:", "PositionableStream", "/Users/piumarta/src/idst/object/st80/PositionableStream.st", 0, 25, 34, 0 };
static oop PositionableStream__on_(oop v__closure, oop v_stateful_self, oop v_self, oop v_aCollection)
 {
  _enter(&__info1);
  oop _1= 0;
  _line(25);
  _1= v_self;
  _line(27);
  _1=_sendv(s_new, 1, _1);
  v_self= _1;
  v_stateful_self= _1;
  _1= v_aCollection;
  ((struct t_PositionableStream *)v_stateful_self)->v_collection= _1;
  _1= l_2;
  ((struct t_PositionableStream *)v_stateful_self)->v_position= _1;
  _1= v_aCollection;
  _line(30);
  _1=_sendv(s_size, 1, _1);
  ((struct t_PositionableStream *)v_stateful_self)->v_readLimit= _1;
  _1= v_self;
  _line(31);
  _1=_sendv(s_reset, 1, _1);
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info3= { "reset", "PositionableStream", "/Users/piumarta/src/idst/object/st80/PositionableStream.st", 0, 34, 39, &__info1 };
static oop PositionableStream__reset(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info3);
  oop _1= 0;
  _line(34);
  _1= l_4;
  ((struct t_PositionableStream *)v_stateful_self)->v_position= _1;
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info5= { "atEnd", "PositionableStream", "/Users/piumarta/src/idst/object/st80/PositionableStream.st", 0, 39, 45, &__info3 };
static oop PositionableStream__atEnd(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info5);
  oop _1= 0;
  oop _2= 0;
  _line(39);
  _1= ((struct t_PositionableStream *)v_stateful_self)->v_position;
  _2= ((struct t_PositionableStream *)v_stateful_self)->v_readLimit;
  if (1 & (long)_1 & (long)_2) {
    _1= (((long)_1 >= (long)_2) ? v_true : v_false);
  } else _1= _sendv(s__3e_3d, 2, _1, _2);
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info6= { "position:", "PositionableStream", "/Users/piumarta/src/idst/object/st80/PositionableStream.st", 0, 45, 56, &__info5 };
static oop PositionableStream__position_(oop v__closure, oop v_stateful_self, oop v_self, oop v_anInteger)
 {
  _enter(&__info6);
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  _line(45);
  /* ifTrue:ifFalse: */
  _1= v_anInteger;
  _2= l_7;
  _3= ((struct t_PositionableStream *)v_stateful_self)->v_readLimit;
  _line(51);
  _1=_sendv(s_between_and_, 3, _1, _2, _3);
  if (!_1) goto _l1;
 {
  _1= v_anInteger;
  ((struct t_PositionableStream *)v_stateful_self)->v_position= _1;
 }
  goto _l2;
 _l1:;
 {
  _1= v_self;
  _line(53);
  _1=_sendv(s_positionError, 1, _1);
 }
 _l2:;
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info8= { "skip:", "PositionableStream", "/Users/piumarta/src/idst/object/st80/PositionableStream.st", 0, 56, 66, &__info6 };
static oop PositionableStream__skip_(oop v__closure, oop v_stateful_self, oop v_self, oop v_anInteger)
 {
  _enter(&__info8);
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  _line(56);
  _1= v_self;
  _2= ((struct t_PositionableStream *)v_stateful_self)->v_position;
  _3= v_anInteger;
  {
    int _l= (long)_2 >> 1;
    int _r= (long)_3 >> 1;
    int _s= _l + _r;
    if ((1 & (long)_2 & (long)_3) && ((_s ^ (_s << 1)) >= 0))  _2= (oop)(long)(_s << 1 | 1);  else _2= _sendv(s__2b, 2, _2, _3);
  }
  _line(63);
  _1=_sendv(s_position_, 2, _1, _2);
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info9= { "size", "PositionableStream", "/Users/piumarta/src/idst/object/st80/PositionableStream.st", 0, 66, 71, &__info8 };
static oop PositionableStream__size(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info9);
  oop _1= 0;
  _line(66);
  _1= ((struct t_PositionableStream *)v_stateful_self)->v_readLimit;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info10= { "contents", "PositionableStream", "/Users/piumarta/src/idst/object/st80/PositionableStream.st", 0, 71, 77, &__info9 };
static oop PositionableStream__contents(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info10);
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  _line(71);
  _1= ((struct t_PositionableStream *)v_stateful_self)->v_collection;
  _2= l_11;
  _3= ((struct t_PositionableStream *)v_stateful_self)->v_readLimit;
  _line(74);
  _1=_sendv(s_copyFrom_to_, 3, _1, _2, _3);
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info12= { "collection", "PositionableStream", "/Users/piumarta/src/idst/object/st80/PositionableStream.st", 0, 77, 83, &__info10 };
static oop PositionableStream__collection(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info12);
  oop _1= 0;
  _line(77);
  _1= ((struct t_PositionableStream *)v_stateful_self)->v_collection;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info13= { "peek", "PositionableStream", "/Users/piumarta/src/idst/object/st80/PositionableStream.st", 0, 83, 92, &__info12 };
static oop PositionableStream__peek(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info13);
  oop v_nextObject= 0;
  oop _1= 0;
  oop _2= 0;
  (void)v_nextObject;
  _line(83);
  /* ifTrue: */
  _1= 0;
  _2= v_self;
  _line(86);
  _2=_sendv(s_atEnd, 1, _2);
  if (!_2) goto _l3;
 {
  _1= v_nil;
  _leave();
  return _1;
 }
 _l3:;
  _1= v_self;
  _line(87);
  _1=_sendv(s_next, 1, _1);
  v_nextObject= _1;
  _1= ((struct t_PositionableStream *)v_stateful_self)->v_position;
  _2= l_14;
  {
    int _l= (long)_1 >> 1;
    int _r= (long)_2 >> 1;
    int _s= (_l - _r);
    if ((1 & (long)_1) && ((_s ^ (_s << 1)) >= 0))  _1= (oop)(long)(_s << 1 | 1);  else _1= _sendv(s__2d, 2, _1, _2);
  }
  ((struct t_PositionableStream *)v_stateful_self)->v_position= _1;
  _1= v_nextObject;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info17= { "[] next:", "PositionableStream", "/Users/piumarta/src/idst/object/st80/PositionableStream.st", 0, 92, 100, &__info13 };
static oop b_17(oop v__closure, oop v__self, oop v_index)
 {
  _enter(&__info17);
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  _line(96);
  _1= ((oop *)((struct t_BlockClosure *)((struct t_BlockClosure *)v__self)->v_state))[1];  /* elements */
  _2= v_index;
  _3= ((oop *)((struct t_BlockClosure *)((struct t_BlockClosure *)v__self)->v_state))[2];  /* self */
  _line(96);
  _3=_sendv(s_next, 1, _3);
  _line(96);
  _1=_sendv(s_at_put_, 3, _1, _2, _3);
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info15= { "next:", "PositionableStream", "/Users/piumarta/src/idst/object/st80/PositionableStream.st", 0, 92, 100, &__info17 };
static oop PositionableStream__next_(oop v__closure, oop v_stateful_self, oop v_self, oop v_anInteger)
 {
  _enter(&__info15);
  oop _state1= _sendv(s_new_5f_, 2, v__vector, 7);
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  ((oop *)_state1)[3]= v_stateful_self;
  ((oop *)_state1)[2]= v_self;
  _line(92);
  _1= ((struct t_PositionableStream *)((oop *)_state1)[3])->v_collection;  /* collection */
  _line(95);
  _1=_sendv(s_species, 1, _1);
  _2= v_anInteger;
  _line(95);
  _1=_sendv(s_new_, 2, _1, _2);
  ((oop *)_state1)[1]= _1;  /* elements */
  _1= l_16;
  _2= v_anInteger;
  /* Scope('index'->ArgumentVariableNode) */
  /* Scope('readLimit'->SlotVariableNode 'position'->SlotVariableNode 'collection'->SlotVariableNode 'stateful_self'->ArgumentVariableNode 'self'->ArgumentVariableNode 'anInteger'->ArgumentVariableNode 'elements'->TemporaryVariableNode) */
  /* nil */
  /* 2 */
  /* 1 */
  _3= _sendv(s_function_5f_arity_5f_outer_state_nlr_5f_, 6, v_BlockClosure, (oop)b_17, 1, 0, ((oop *)_state1), 0);
  _line(96);
  _1=_sendv(s_to_do_, 3, _1, _2, _3);
  _1= ((oop *)_state1)[1];  /* elements */
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info18= { "positionError", "PositionableStream", "/Users/piumarta/src/idst/object/st80/PositionableStream.st", 0, 100, 104, &__info15 };
static oop PositionableStream__positionError(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info18);
  oop _1= 0;
  oop _2= 0;
  _line(100);
  _1= v_self;
  _2= l_19;
  _line(102);
  _1=_sendv(s_error_, 2, _1, _2);
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }

static struct __methodinfo __info= { "__id__init__", "<initialisation>", "PositionableStream.st", 0, 0, 0, &__info18 };
void __id__init__PositionableStream(struct __libid *__libid)
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

  _sendv(s__5fimport_, 3, _libid->_object, "Stream", "__id__init__Stream");
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
  v_Stream= _libid->import("Stream");
  v_PositionableStream= _libid->proto2(v_Stream, PositionableStream___5fsizeof(0, 0));
  _libid->method(v_PositionableStream, s__5fsizeof, (_imp_t)PositionableStream___5fsizeof);
  _libid->method(v_PositionableStream, s__5fdebugName, (_imp_t)PositionableStream___5fdebugName);
  _libid->method(v_PositionableStream, s__5fslots, (_imp_t)PositionableStream___5fslots);
  _libid->export("PositionableStream", v_PositionableStream);
  l_2= _sendv(s_value_5f_, 2, v_SmallInteger, 0);
  _libid->method(v_PositionableStream, s_on_, (_imp_t)PositionableStream__on_);
  l_4= _sendv(s_value_5f_, 2, v_SmallInteger, 0);
  _libid->method(v_PositionableStream, s_reset, (_imp_t)PositionableStream__reset);
  _libid->method(v_PositionableStream, s_atEnd, (_imp_t)PositionableStream__atEnd);
  l_7= _sendv(s_value_5f_, 2, v_SmallInteger, 0);
  _libid->method(v_PositionableStream, s_position_, (_imp_t)PositionableStream__position_);
  _libid->method(v_PositionableStream, s_skip_, (_imp_t)PositionableStream__skip_);
  _libid->method(v_PositionableStream, s_size, (_imp_t)PositionableStream__size);
  l_11= _sendv(s_value_5f_, 2, v_SmallInteger, 1);
  _libid->method(v_PositionableStream, s_contents, (_imp_t)PositionableStream__contents);
  _libid->method(v_PositionableStream, s_collection, (_imp_t)PositionableStream__collection);
  l_14= _sendv(s_value_5f_, 2, v_SmallInteger, 1);
  _libid->method(v_PositionableStream, s_peek, (_imp_t)PositionableStream__peek);
  l_16= _sendv(s_value_5f_, 2, v_SmallInteger, 1);
  _libid->method(v_PositionableStream, s_next_, (_imp_t)PositionableStream__next_);
  l_19= _sendv(s_size_5f_value_5f_, 3, v_ImmutableString, 53, "attempt to set Stream position beyond readable bounds");
  _libid->method(v_PositionableStream, s_positionError, (_imp_t)PositionableStream__positionError);
  _leave();
}
