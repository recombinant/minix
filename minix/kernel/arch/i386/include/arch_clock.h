#ifndef MINIX_KERNEL_ARCH_I386_INCLUDE_ARCH_CLOCK_H_
#define MINIX_KERNEL_ARCH_I386_INCLUDE_ARCH_CLOCK_H_

#include "../apic_asm.h"

int init_8253A_timer(unsigned freq);
void stop_8253A_timer(void);
void arch_timer_int_handler(void);

#endif // MINIX_KERNEL_ARCH_I386_INCLUDE_ARCH_CLOCK_H_
