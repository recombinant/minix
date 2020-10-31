#ifndef MINIX_KERNEL_ARCH_EARM_INCLUDE_IO_H_
#define MINIX_KERNEL_ARCH_EARM_INCLUDE_IO_H_

#ifndef __ASSEMBLY__

#include <sys/types.h>

/* Access memory-mapped I/O devices */
#define mmio_read(a)    (*(volatile u32_t *)(a))
#define mmio_write(a,v) (*(volatile u32_t *)(a) = (v))
#define mmio_set(a,v)   mmio_write((a), mmio_read((a)) | (v))
#define mmio_clear(a,v) mmio_write((a), mmio_read((a)) & ~(v))

#endif /* __ASSEMBLY__ */

#endif // MINIX_KERNEL_ARCH_EARM_INCLUDE_IO_H_
