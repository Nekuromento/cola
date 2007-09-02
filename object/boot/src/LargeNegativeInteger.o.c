/* generated by Id 1.0 at 2007-09-02 14:34:22 Z */
/* with the command: -I../stage1/ -c LargeNegativeInteger.st -o ../stage2/LargeNegativeInteger.o.c */

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

static oop s_new_5f_= 0;
static oop s__3c_3d= 0;
static oop s_value_5f_= 0;
static oop s_negative= 0;
static oop s__5fimport_= 0;
static oop s_ifFalse_= 0;
static oop s_negated= 0;
static oop s_normalize= 0;
static oop s__2d= 0;
static oop s_ifTrue_= 0;
static oop s_to_do_= 0;
static oop s_growTo_= 0;
static oop s_abs= 0;
static oop s__3d= 0;
static oop s_size_5f_value_5f_= 0;
static oop s_digitLength= 0;
static oop s__3c= 0;
static oop s_ifTrue_ifFalse_= 0;
static oop s__2a= 0;
static oop s_function_5f_arity_5f_outer_state_nlr_5f_= 0;
static oop s_minVal= 0;
static oop s_or_= 0;
static oop s_whileTrue_= 0;
static oop s_to_by_do_= 0;
static oop s_withBytes_= 0;
static oop s_lastDigit= 0;
static oop s_digitAt_= 0;
static struct _Selector { const char *name; oop *addr; } _Selectors[]= {
  { "new_:", &s_new_5f_ },
  { "<=", &s__3c_3d },
  { "value_:", &s_value_5f_ },
  { "negative", &s_negative },
  { "_import:", &s__5fimport_ },
  { "ifFalse:", &s_ifFalse_ },
  { "negated", &s_negated },
  { "normalize", &s_normalize },
  { "-", &s__2d },
  { "ifTrue:", &s_ifTrue_ },
  { "to:do:", &s_to_do_ },
  { "growTo:", &s_growTo_ },
  { "abs", &s_abs },
  { "=", &s__3d },
  { "size_:value_:", &s_size_5f_value_5f_ },
  { "digitLength", &s_digitLength },
  { "<", &s__3c },
  { "ifTrue:ifFalse:", &s_ifTrue_ifFalse_ },
  { "*", &s__2a },
  { "function_:arity_:outer:state:nlr_:", &s_function_5f_arity_5f_outer_state_nlr_5f_ },
  { "minVal", &s_minVal },
  { "or:", &s_or_ },
  { "whileTrue:", &s_whileTrue_ },
  { "to:by:do:", &s_to_by_do_ },
  { "withBytes:", &s_withBytes_ },
  { "lastDigit", &s_lastDigit },
  { "digitAt:", &s_digitAt_ },
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
static oop l_1= 0;
static oop l_2= 0;
static oop l_3= 0;
static oop l_4= 0;
static oop l_7= 0;
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
static oop v_LargeNegativeInteger= 0;
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
static oop LargeNegativeInteger__size_5f_value_5f_(oop v__closure, oop v_stateful_self, oop v_self, oop v__size, oop v__bytes)
 {
  _enter("size_:value_:", "LargeNegativeInteger", "/home/piumarta/src/idst/object/st80/LargeNegativeInteger.st");
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  oop _4= 0;
  _line(25);
  _1= v_self;
  _2= v_ByteArray;
  _3= v__size;
  _4= v__bytes;
  _line(27);
  _2=_send(s_size_5f_value_5f_, _2, _3, _4);
  _line(27);
  _1=_send(s_withBytes_, _1, _2);
  _leave();
  return _1;
  _leave();
 }
static oop b_5(oop v__closure, oop v__self, oop v_i)
 {
  _enter("[]", "?", "/home/piumarta/src/idst/object/st80/LargeNegativeInteger.st");
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  _line(46);
  _1= ((oop *)((struct t_BlockClosure *)((struct t_BlockClosure *)v__self)->v_state))[1];  /* val */
  _2= l_7;
  {
    int _l= (int)_1 >> 1;
    int _r= (int)_2 >> 1;
    int _s= (_l * _r);
    if ((1 & (int)_1) && ((_r == 0) || (_s / _r == _l)) && ((_s ^ (_s << 1)) >= 0))  _1= (oop)(_s << 1 | 1);  else _1= _send(s__2a, _1, _2);
  }
  _2= ((oop *)((struct t_BlockClosure *)((struct t_BlockClosure *)v__self)->v_state))[2];  /* self */
  _3= v_i;
  _line(46);
  _2=_send(s_digitAt_, _2, _3);
  {
    int _l= (int)_1 >> 1;
    int _r= (int)_2 >> 1;
    int _s= (_l - _r);
    if ((1 & (int)_1 & (int)_2) && ((_s ^ (_s << 1)) >= 0))  _1= (oop)(_s << 1 | 1);  else _1= _send(s__2d, _1, _2);
  }
  ((oop *)((struct t_BlockClosure *)((struct t_BlockClosure *)v__self)->v_state))[1]= _1;  /* val */
  _leave();
  return _1;
  _leave();
 }
static oop b_6(oop v__closure, oop v__self, oop v_i)
 {
  _enter("[]", "?", "/home/piumarta/src/idst/object/st80/LargeNegativeInteger.st");
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  oop _4= 0;
  _line(48);
  /* ifFalse: */
  _1= 0;
  _2= ((oop *)((struct t_BlockClosure *)((struct t_BlockClosure *)v__self)->v_state))[2];  /* self */
  _3= v_i;
  _line(48);
  _2=_send(s_digitAt_, _2, _3);
  _3= ((oop *)((struct t_BlockClosure *)((struct t_BlockClosure *)v__self)->v_state))[4];  /* minVal */
  _4= v_i;
  _line(48);
  _3=_send(s_digitAt_, _3, _4);
  if (1 & (int)_2 & (int)_3) {
    _2= (((int)_2 == (int)_3) ? v_true : v_false);
  } else _2= _send(s__3d, _2, _3);
  if (_2) goto _l1;
 {
  /* ifTrue:ifFalse: */
  _1= ((oop *)((struct t_BlockClosure *)((struct t_BlockClosure *)v__self)->v_state))[5];  /* len */
  _2= ((oop *)((struct t_BlockClosure *)((struct t_BlockClosure *)v__self)->v_state))[6];  /* oldLen */
  if (1 & (int)_1 & (int)_2) {
    _1= (((int)_1 < (int)_2) ? v_true : v_false);
  } else _1= _send(s__3c, _1, _2);
  if (!_1) goto _l2;
 {
  _1= ((oop *)((struct t_BlockClosure *)((struct t_BlockClosure *)v__self)->v_state))[2];  /* self */
  _2= ((oop *)((struct t_BlockClosure *)((struct t_BlockClosure *)v__self)->v_state))[5];  /* len */
  _line(50);
  _1=_send(s_growTo_, _1, _2);
 }
  goto _l3;
 _l2:;
 {
  _1= ((oop *)((struct t_BlockClosure *)((struct t_BlockClosure *)v__self)->v_state))[2];  /* self */
 }
 _l3:;
  _leave();
  return _nlreturn(((struct t_BlockClosure *)v__self)->v__nlr, _1);
 }
 _l1:;
  _leave();
  return _1;
  _leave();
 }
static oop LargeNegativeInteger__normalize(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter("normalize", "LargeNegativeInteger", "/home/piumarta/src/idst/object/st80/LargeNegativeInteger.st");
  oop _state1= _send(s_new_5f_, v__vector, 8);
  oop v_sLen= 0;
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  oop _4= 0;
  jmp_buf __nlr;
  oop _nlr;
  (void)v_sLen;
  ((oop *)_state1)[3]= v_stateful_self;
  ((oop *)_state1)[2]= v_self;
  _nlr= (oop)&__nlr;
  if (setjmp(__nlr)) { return _nlresult(); }
  _line(30);
  _1= ((oop *)_state1)[2];  /* self */
  _line(34);
  _1=_send(s_digitLength, _1);
  ((oop *)_state1)[6]= _1;  /* oldLen */
  ((oop *)_state1)[5]= _1;  /* len */
  /* whileTrue: */
  goto _l5;
 _l4:;
 {
  _1= ((oop *)_state1)[5];  /* len */
  _2= l_2;
  {
    int _l= (int)_1 >> 1;
    int _r= (int)_2 >> 1;
    int _s= (_l - _r);
    if ((1 & (int)_1) && ((_s ^ (_s << 1)) >= 0))  _1= (oop)(_s << 1 | 1);  else _1= _send(s__2d, _1, _2);
  }
  ((oop *)_state1)[5]= _1;  /* len */
 }
 _l5:;
 {
  /* ifTrue: */
  _1= 0;
  _2= ((oop *)_state1)[5];  /* len */
  _3= l_1;
  if (1 & (int)_2) {
    _2= (((int)_2 == (int)_3) ? v_true : v_false);
  } else _2= _send(s__3d, _2, _3);
  if (!_2) goto _l6;
 {
  _1= l_1;
  _leave();
  return _1;
 }
 _l6:;
  _1= ((oop *)_state1)[2];  /* self */
  _2= ((oop *)_state1)[5];  /* len */
  _line(36);
  _1=_send(s_digitAt_, _1, _2);
  _2= l_1;
  if (1 & (int)_1) {
    _1= (((int)_1 == (int)_2) ? v_true : v_false);
  } else _1= _send(s__3d, _1, _2);
 }
  if (_1) goto _l4;
  _1= 0;
  _1= l_3;
  v_sLen= _1;
  /* ifTrue: */
  _1= 0;
  _2= ((oop *)_state1)[5];  /* len */
  _3= v_sLen;
  if (1 & (int)_2 & (int)_3) {
    _2= (((int)_2 <= (int)_3) ? v_true : v_false);
  } else _2= _send(s__3c_3d, _2, _3);
  if (!_2) goto _l7;
 {
  _1= v_SmallInteger;
  _line(42);
  _1=_send(s_minVal, _1);
  ((oop *)_state1)[4]= _1;  /* minVal */
  /* ifTrue: */
  _1= 0;
  /* or: */
  _2= ((oop *)_state1)[5];  /* len */
  _3= v_sLen;
  if (1 & (int)_2 & (int)_3) {
    _2= (((int)_2 < (int)_3) ? v_true : v_false);
  } else _2= _send(s__3c, _2, _3);
  if (_2) goto _l9;
 {
  _2= ((oop *)_state1)[2];  /* self */
  _3= v_sLen;
  _line(43);
  _2=_send(s_digitAt_, _2, _3);
  _3= ((oop *)_state1)[4];  /* minVal */
  _line(43);
  _3=_send(s_lastDigit, _3);
  if (1 & (int)_2 & (int)_3) {
    _2= (((int)_2 < (int)_3) ? v_true : v_false);
  } else _2= _send(s__3c, _2, _3);
 }
 _l9:;
  if (!_2) goto _l8;
 {
  _1= l_1;
  ((oop *)_state1)[1]= _1;  /* val */
  _1= ((oop *)_state1)[5];  /* len */
  _2= l_2;
  _3= l_4;
  /* Scope('i'->ArgumentVariableNode) */
  /* Scope('oldLen'->TemporaryVariableNode 'val'->TemporaryVariableNode 'stateful_self'->ArgumentVariableNode 'self'->ArgumentVariableNode 'sLen'->TemporaryVariableNode 'len'->TemporaryVariableNode 'minVal'->TemporaryVariableNode 'bytes'->SlotVariableNode) */
  /* nil */
  /* 2 */
  /* 1 */
  _4= _send(s_function_5f_arity_5f_outer_state_nlr_5f_, v_BlockClosure, (oop)b_5, 1, 0, ((oop *)_state1), 0);
  _line(46);
  _1=_send(s_to_by_do_, _1, _2, _3, _4);
  _1= ((oop *)_state1)[1];  /* val */
  _leave();
  return _1;
 }
 _l8:;
  _1= l_2;
  _2= v_sLen;
  /* Scope('i'->ArgumentVariableNode) */
  /* Scope('oldLen'->TemporaryVariableNode 'val'->TemporaryVariableNode 'stateful_self'->ArgumentVariableNode 'self'->ArgumentVariableNode 'sLen'->TemporaryVariableNode 'len'->TemporaryVariableNode 'minVal'->TemporaryVariableNode 'bytes'->SlotVariableNode) */
  /* nil */
  /* 2 */
  /* 1 */
  _3= _send(s_function_5f_arity_5f_outer_state_nlr_5f_, v_BlockClosure, (oop)b_6, 1, 0, ((oop *)_state1), _nlr);
  _line(48);
  _1=_send(s_to_do_, _1, _2, _3);
  _1= ((oop *)_state1)[4];  /* minVal */
  _leave();
  return _1;
 }
 _l7:;
  /* ifTrue:ifFalse: */
  _1= ((oop *)_state1)[5];  /* len */
  _2= ((oop *)_state1)[6];  /* oldLen */
  if (1 & (int)_1 & (int)_2) {
    _1= (((int)_1 < (int)_2) ? v_true : v_false);
  } else _1= _send(s__3c, _1, _2);
  if (!_1) goto _l10;
 {
  _1= ((oop *)_state1)[2];  /* self */
  _2= ((oop *)_state1)[5];  /* len */
  _line(55);
  _1=_send(s_growTo_, _1, _2);
 }
  goto _l11;
 _l10:;
 {
  _1= ((oop *)_state1)[2];  /* self */
 }
 _l11:;
  _leave();
  return _1;
  _leave();
 }
static oop LargeNegativeInteger__abs(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter("abs", "LargeNegativeInteger", "/home/piumarta/src/idst/object/st80/LargeNegativeInteger.st");
  oop _1= 0;
  _line(59);
  _1= v_self;
  _line(59);
  _1=_send(s_negated, _1);
  _leave();
  return _1;
  _leave();
 }
static oop LargeNegativeInteger__negative(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter("negative", "LargeNegativeInteger", "/home/piumarta/src/idst/object/st80/LargeNegativeInteger.st");
  oop _1= 0;
  _line(61);
  _1= v_true;
  _leave();
  return _1;
  _leave();
 }

void __id__init__LargeNegativeInteger(void)
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
  _enter("__id__init__", "<initialisation>", "LargeNegativeInteger.st");

  _send(s__5fimport_, _local_object, "LargePositiveInteger", "__id__init__LargePositiveInteger");
  _send(s__5fimport_, _local_object, "Integer", "__id__init__Integer");
  _send(s__5fimport_, _local_object, "Number", "__id__init__Number");
  _send(s__5fimport_, _local_object, "Magnitude", "__id__init__Magnitude");
  _send(s__5fimport_, _local_object, "Object", "__id__init__Object");
  _send(s__5fimport_, _local_object, "_object", "__id__init___5fobject");
  v__object= _id_import("_object");
  v__vector= _id_import("_vector");
  v_Object= _id_import("Object");
  v_UndefinedObject= _id_import("UndefinedObject");
  v_StaticBlockClosure= _id_import("StaticBlockClosure");
  v_BlockClosure= _id_import("BlockClosure");
  v_Magnitude= _id_import("Magnitude");
  v_Number= _id_import("Number");
  v_Integer= _id_import("Integer");
  v_SmallInteger= _id_import("SmallInteger");
  v_LargePositiveInteger= _id_import("LargePositiveInteger");
  v_LargeNegativeInteger= _id_import("LargeNegativeInteger");
  v_Collection= _id_import("Collection");
  v_SequenceableCollection= _id_import("SequenceableCollection");
  v_ArrayedCollection= _id_import("ArrayedCollection");
  v_Array= _id_import("Array");
  v_WordArray= _id_import("WordArray");
  v_ByteArray= _id_import("ByteArray");
  v_String= _id_import("String");
  v_ImmutableString= _id_import("ImmutableString");
  v_true= _id_import("true");
  v_false= _id_import("false");
  _send(s__5fimport_, _local_object, "BlockClosure", "__id__init__BlockClosure");
  _send(s__5fimport_, _local_object, "SmallInteger", "__id__init__SmallInteger");
  _send(s__5fimport_, _local_object, "Array", "__id__init__Array");
  _send(s__5fimport_, _local_object, "ArrayedCollection", "__id__init__ArrayedCollection");
  _send(s__5fimport_, _local_object, "SequenceableCollection", "__id__init__SequenceableCollection");
  _send(s__5fimport_, _local_object, "Collection", "__id__init__Collection");
  _send(s__5fimport_, _local_object, "Character", "__id__init__Character");
  _send(s__5fimport_, _local_object, "String", "__id__init__String");
  _send(s__5fimport_, _local_object, "ByteArray", "__id__init__ByteArray");
  _send(s__5fimport_, _local_object, "WordArray", "__id__init__WordArray");
  _method(v_LargeNegativeInteger, s_size_5f_value_5f_, LargeNegativeInteger__size_5f_value_5f_);
  l_1= _send(s_value_5f_, v_SmallInteger, 0);
  l_2= _send(s_value_5f_, v_SmallInteger, 1);
  l_3= _send(s_value_5f_, v_SmallInteger, 4);
  l_4= _send(s_value_5f_, v_SmallInteger, -1);
  l_7= _send(s_value_5f_, v_SmallInteger, 256);
  _method(v_LargeNegativeInteger, s_normalize, LargeNegativeInteger__normalize);
  _method(v_LargeNegativeInteger, s_abs, LargeNegativeInteger__abs);
  _method(v_LargeNegativeInteger, s_negative, LargeNegativeInteger__negative);
  _leave();
}
