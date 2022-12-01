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

int main(int argc, char *argv[])
{
  //Print the screen and then after 5 seconds clear the screen.
  ps2_printf("Hello, World!\n", 5);

  // Prints the screen once again but move the cursor to 20 20
  // after 10 seconds
  ps2_printf_XY("Hello again, World\n", 10, 20, 20);

  return 0;
}
