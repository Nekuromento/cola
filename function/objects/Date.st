" Date.st -- a particular day

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

  Last edited: 2007-04-02 10:41:09 by piumarta on alan-kays-computer.local
"

{ import: Object }

Date : Object ( _seconds _microseconds )

Date new
[
    ^super new initialize.
]

Date initialize
{
    struct timeval tv;
    gettimeofday(&tv, 0);
    self->v__seconds= (oop)tv.tv_sec;
    self->v__microseconds= (oop)tv.tv_usec;
}

Date seconds		[ ^Integer value_: _seconds ]
Date microseconds	[ ^SmallInteger value_: _microseconds ]
Date milliseconds	[ ^self microseconds // 1000 ]
