#include "serial.h"

void kernel_main(void) {
  extern uint64_t _stack_top;
  uint64_t heap_start = (uint64_t)&_stack_top;
  volatile char *c = (char*) 0xffff0010;
  volatile int  *u = (int*) 0xffff0010;
  volatile char *c1 = (char*) 0xffff0011;
  char a;  

  kprint("hello world!\n");

  *u = 0x4f3f;  // Write data into practice device displays "30" on RARS-style 7-segment displays 
  
}
