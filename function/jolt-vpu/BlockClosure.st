" BlockClosure.st -- deferred execution of code

  Copyright (c) 2006, 2007 Ian Piumarta
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

  Last edited: 2007-02-28 14:46:40 by piumarta on emilia
"

{ import: Objects }

StaticBlockClosure function_: _implementationAddress arity_: _argumentCount
[
    { v_self= v_stateful_self= _alloc(v_self, sizeof(*self)); }.
    _arity    := _argumentCount.
    _function := _implementationAddress.
]

StaticBlockClosure arity	[ ^SmallInteger value_: _arity ]

"evaluating"

StaticBlockClosure value
[
    { if ((int)self->v__arity == 0) return ((_imp_t)(self->v__function))(v__closure, v_self); }.
    ^self errorArgumentCount: 0
]

StaticBlockClosure value: a
[
    { if ((int)self->v__arity == 1) return ((_imp_t)(self->v__function))(v__closure, v_self, v_a); }.
    ^self errorArgumentCount: 1
]

StaticBlockClosure value: a value: b
[
    { if ((int)self->v__arity == 2) return ((_imp_t)(self->v__function))(v__closure, v_self, v_a, v_b); }.
    ^self errorArgumentCount: 1
]

StaticBlockClosure value: a value: b value: c
[
    { if ((int)self->v__arity == 3) return ((_imp_t)(self->v__function))(v__closure, v_self, v_a, v_b, v_c); }.
    ^self errorArgumentCount: 1
]

StaticBlockClosure value: a value: b value: c value: d
[
    { if ((int)self->v__arity == 4) return ((_imp_t)(self->v__function))(v__closure, v_self, v_a, v_b, v_c, v_d); }.
    ^self errorArgumentCount: 1
]

StaticBlockClosure value: a value: b value: c value: d value: e
[
    { if ((int)self->v__arity == 5) return ((_imp_t)(self->v__function))(v__closure, v_self, v_a, v_b, v_c, v_d, v_e); }.
    ^self errorArgumentCount: 1
]

"controling"

StaticBlockClosure whileTrue
[
    [self value] whileTrue: []
]

StaticBlockClosure whileTrue: aBlock
[
    self value
	ifTrue:
	   [aBlock value.
	    self whileTrue: aBlock].
]

StaticBlockClosure whileFalse
[
    [self value] whileFalse: []
]

StaticBlockClosure whileFalse: aBlock
[
    self value
	ifFalse:
	   [aBlock value.
	    self whileFalse: aBlock].
]

StaticBlockClosure repeat
[
    [true] whileTrue: [self value]
]


BlockClosure function_: _implementationAddress arity_: _argumentCount
	     outer: outerBlock state: variableArray nlr_: _dynamicEnvironment
[
    { v_self= v_stateful_self= _alloc(v_self, sizeof(*self)); }.
    _function := _implementationAddress.
    _arity    := _argumentCount.
    outer     := outerBlock.
    state     := variableArray.
    _nlr      := _dynamicEnvironment.
]
