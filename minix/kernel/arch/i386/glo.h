#ifndef MINIX_KERNEL_ARCH_I386_GLO_H_
#define MINIX_KERNEL_ARCH_I386_GLO_H_

#include "kernel/kernel.h"
#include "arch_proto.h"

EXTERN int cpu_has_tsc;	/* signal whether this cpu has time stamp register. This
			   feature was introduced by Pentium */

EXTERN struct tss_s tss[CONFIG_MAX_CPUS];

EXTERN int i386_paging_enabled;

#endif // MINIX_KERNEL_ARCH_I386_GLO_H_
