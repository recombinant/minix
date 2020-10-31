#ifndef MINIX_KERNEL_ARCH_I386_INCLUDE_ARCH_SMP_H_
#define MINIX_KERNEL_ARCH_I386_INCLUDE_ARCH_SMP_H_

#include "arch_proto.h" /* K_STACK_SIZE */

#define MAX_NR_INTERRUPT_ENTRIES	128

#ifndef __ASSEMBLY__

/* returns the current cpu id */
#define cpuid	(((u32_t *)(((u32_t)get_stack_frame() + (K_STACK_SIZE - 1)) \
						& ~(K_STACK_SIZE - 1)))[-1])
/* 
 * in case apic or smp is disabled in boot monitor, we need to finish single cpu
 * boot using the legacy PIC
 */
#define smp_single_cpu_fallback() do {		\
	  tss_init(0, get_k_stack_top(0));	\
	  bsp_cpu_id = 0;			\
	  ncpus = 1;				\
	  bsp_finish_booting();			\
} while(0)

extern unsigned char cpuid2apicid[CONFIG_MAX_CPUS];

#define barrier()	do { mfence(); } while(0)

#endif

#endif // MINIX_KERNEL_ARCH_I386_INCLUDE_ARCH_SMP_H_
