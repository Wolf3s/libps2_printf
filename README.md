## libps2_printf

A library/wrapper created by myself inspired on ps2_drivers by [fjtrujy](https://github.com/fjtrujy) that makes easy to print on the screen with one declaration without any burrocracy, it´s gonna be using firstly on [doomgeneric-ps2](https://github.com/Arawn-Davies/doomgeneric-ps2) and [Wolf4SDL](https://github.com/Doom-modding-and-etc/Wolf4SDL)

## Contact Links:

Youtube: https://www.youtube.com/channel/UCzMnDI1qhD6egKLMTezysxg

Discord: Wolf3s#6897

Github: https://github.com/wolfysdl

## History

When i was trying to upgrade the [dooomgeneric-ps2](https://github.com/Arawn-Davies/doomgeneric-ps2) by
[Arawn-Davies](https://github.com/Arawn-Davies) Arawn was having difficult to make the  ``scr_printf``
work yesterday.
so i decided to implement a wraaper(initially) and when it worked i felt realized so, i thinked to work more on this and this makes the libps2_printf surges.

## Installation

Install [ps2dev](https://github.com/ps2dev/ps2dev) and his whole package and then:
``$ make install `` to get the library running.

to link the library just copy and past this on the ``Makefile``
``EE_LIBS += -lps2_drivers -ldebug``

## Comparison and example

Let me put an example based on the helloworld sample, which we will compare `Before` vs `After` to see how
easy this library can be.

### BEFORE

`Makefile`

```make

EE_LIBS += -ldebug -lc


```

`main.c`

```c

/*
# _____     ___ ____     ___ ____
#  ____|   |    ____|   |        | |____|
# |     ___|   |____ ___|    ____| |    \    PS2DEV Open Source Project.
#-----------------------------------------------------------------------
# Copyright 2001-2004, ps2dev - http://www.ps2dev.org
# Licenced under Academic Free License version 2.0
# Review ps2sdk README & LICENSE files for further details.
*/


#include <stdio.h>
#include <tamtypes.h>
#include <sifrpc.h>
#include <debug.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
  SifInitRpc(0);
  init_scr();

  scr_printf("Hello, World!\n");

  // After 5 seconds, clear the screen.
  sleep(5);
  scr_clear();

  // Move cursor to 20, 20
  scr_setXY(20, 20);
  scr_printf("Hello Again, World!\n");

  sleep(10);

  return 0;
}
```

### AFTER

`Makefile`

```make
LIBS += -lps2_printf -ldebug -lc
```

`main.c`

```c

/*
# _____     ___ ____     ___ ____
#  ____|   |    ____|   |        | |____|
# |     ___|   |____ ___|    ____| |    \    PS2DEV Open Source Project.
#-----------------------------------------------------------------------
# Copyright 2001-2004, ps2dev - http://www.ps2dev.org
# Licenced under Academic Free License version 2.0
# Review ps2sdk README & LICENSE files for further details.
*/

#include <ps2_printf.h>
#include <sifppc.h>
int main(int argc, char *argv[])
{
  SifInitRpc(0);
  //Print the screen and then after 5 seconds clear the screen.
  ps2_printf("Hello, World!\n", 5);

  // Prints the screen once again but move the cursor to 20 20
  // after 10 seconds
  ps2_printf_XY("Hello again, World\n", 10, 20, 20);

  return 0;
}
```

beautiful isn´t it?

## Samples:

callstacktest(ported from ps2sdk).

Description:
Call the stack test on the screen.

helloworld(ported from ps2sdk), helloworld-cpp(ported from ps2sdk) and helloworld-cpp-2(ported from ps2sdk).
Description:
Normal hello world.

## printfs-showcase

Description:
Some printfs showcase.

## License:

BSD 2-Clause license
Copyright André Guilherme

## Known issues:

- Solve the problem with integers
