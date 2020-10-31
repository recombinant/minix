#ifndef MINIX_KERNEL_VM_H_
#define MINIX_KERNEL_VM_H_

/* Pseudo error codes */
#define VMSUSPEND       (-996)
#define EFAULT_SRC	(-995)
#define EFAULT_DST	(-994)

#define PHYS_COPY_CATCH(src, dst, size, a) {	\
	catch_pagefaults++;			\
	a = phys_copy(src, dst, size);		\
	catch_pagefaults--;			\
	}

#endif // MINIX_KERNEL_VM_H_
