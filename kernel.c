#include "serial.h"

void kernel_main(void) {
  extern uint64_t _stack_top;
  uint64_t heap_start = (uint64_t)&_stack_top;
  volatile char *c = (char*) 0x200000;
  char a;  

  kprint("hello world!\n");

  *c = 'A';  // Write data into practice device
  a = *c;    // Read data from practice device

}
