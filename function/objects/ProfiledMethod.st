{ import: Object }

{ include "sigalrm.h" }

ProfiledMethod : Object ( _method count next )

ProfiledMethod new
{
    oop clone= (oop)malloc(sizeof(oop) + sizeof(*self)) + 1;
    clone->_vtable[-1]= self->_vtable[-1];
    _return(clone);
}

ProfiledMethod delete
{
    free(v_self - 1);
}

ProfiledMethod release
[
    next ifTrue: [next release].
    self delete
]

ProfiledMethods := [ nil ]

ProfiledMethod withMethod_: _mi
[
    {
	struct __methodinfo *mi= (struct __methodinfo *)v__mi;
	if (mi->meta) return (oop)mi->meta;
    }.
    self := self new.
    _method := _mi.
    count := 0.
    next := ProfiledMethods.
    ProfiledMethods := self.
    {
	struct __methodinfo *mi= (struct __methodinfo *)v__mi;
	mi->meta= (void *)self;
    }.
]

ProfiledMethod _method	[ ^_method ]
ProfiledMethod count	[ ^count ]
ProfiledMethod next	[ ^next ]

ProfiledMethod increment	[ count := count + 1 ]

ProfiledMethod do: unaryBlock
[
    | me |
    me := self.
    [ unaryBlock value: me.
      me := me next] whileTrue.
]

ProfiledMethod report
[
    | stream total |
    self sort.
    total := self tally.
    stream := WriteStream on: (String new: 1024).
    self do: [:method | method reportOn: stream tally: total].
    self release.
    ^stream contents
]

ProfiledMethod reportOn: aStream tally: tally
[
    count		 printOn: aStream base: 10 width: 5 padded: $ .
    count * 100 // tally printOn: aStream base: 10 width: 4 padded: $ .
    aStream
	nextPut: $%;
	space; nextPutAll: self type;
	space; nextPutAll: self name;
	cr.
    ^count
]

ProfiledMethod sort
[
    (next and: [next sort > count])
	ifTrue:
	   [self exchange: next.
	    next sort].
    ^count
]

ProfiledMethod tally
[
    ^count + (next ifTrue: [next count] ifFalse: [0])
]

ProfiledMethod exchange: other
[
    | _m c |
    _m := other _method.
    c  := other count.
    other setMethod_: _method count: count.
    _method := _m.
    count := c.
]

ProfiledMethod setMethod_: _m count: c
[
    _method := _m.
    count := c.
]

ProfiledMethod type	[ ^String value_: self _type ]
ProfiledMethod name	[ ^String value_: self _name ]

ProfiledMethod _type	{ _return((oop)((struct __methodinfo *)self->v__method)->type); }
ProfiledMethod _name	{ _return((oop)((struct __methodinfo *)self->v__method)->name); }

StaticBlockClosure statisticalProfile
[
    | methods |
    self perform: #profilerTick every: 0.001.
    self value.
    self perform: nil every: 0.
    methods := ProfiledMethods.
    ProfiledMethods := nil.
    ^methods
]

Object profilerTick
[
    | _mi mi |
    { if (!(v__mi= _libid->methodAt(1))) { _return(0); } }.
    mi := ProfiledMethod withMethod_: _mi.
    mi increment.
]

Object perform: aSymbol every: nSeconds
[
    | s us |
    s  := nSeconds asInteger.
    us := (nSeconds * 1000000) asInteger \\ 1000000.
    {
#     if defined(WIN32)
	(void)sigalrm;
#     else
	long s=  (long)v_s  >> 1;
	long us= (long)v_us >> 1;
	struct itimerval interval= { { s, us }, { s, us } };
	sigalrmReceiver= v_self;
	sigalrmSelector= v_aSymbol;
	if (v_aSymbol)
	  {
	    enableStatisticalProfile();
	    signal(SIGALRM, sigalrm);
	    setitimer(ITIMER_REAL, &interval, 0);
	  }
	else
	  {
	    signal(SIGALRM, SIG_IGN);
	    setitimer(ITIMER_REAL, 0, 0);
	    disableStatisticalProfile();
	  }
#     endif
    }
]

