#ifndef MINIX_KERNEL_ARCH_I386_INCLUDE_ARCH_WATCHDOG_H_
#define MINIX_KERNEL_ARCH_I386_INCLUDE_ARCH_WATCHDOG_H_

#include "kernel/kernel.h"

struct nmi_frame {
	reg_t	eax;
	reg_t	ecx;
	reg_t	edx;
	reg_t	ebx;
	reg_t	esp;
	reg_t	ebp;
	reg_t	esi;
	reg_t	edi;
	u16_t	gs;
	u16_t	fs;
	u16_t	es;
	u16_t	ds;
	reg_t	pc;	/* arch independent name for program counter */
	reg_t	cs;
	reg_t	eflags;
};

int i386_watchdog_start(void);

#define nmi_in_kernel(f)	((f)->cs == KERN_CS_SELECTOR)

#endif // MINIX_KERNEL_ARCH_I386_INCLUDE_ARCH_WATCHDOG_H_
