#include "serial.h"

void kernel_main(void) {
  extern uint64_t _stack_top;
  uint64_t heap_start = (uint64_t)&_stack_top;
  volatile char *c = (char*) 0xffff0010;
  volatile int  *u = (int*) 0xffff0010;
  volatile char *c1 = (char*) 0xffff0011;
  volatile unsigned int *rgb_disp = (unsigned int *)0xffff4000;
  volatile unsigned int *mono_disp = (unsigned int *)0xffff8000;
  char a;
  int i;  

  int colors[] = {0xff0000,0x00ff00,0x0000ff,0xffffff,0x000000};

  kprint("hello world!\n");

  *u = 0x4f3f;  // Write data into practice device displays "30" on RARS-style 7-segment displays 
  
  for (i=0; i<32*32; i++)
  {
    rgb_disp[i] = colors[i % 5];
  }
  
  for (i=0; i<32; i++)
  {
    mono_disp[i] = 1 << i;
  }

}
