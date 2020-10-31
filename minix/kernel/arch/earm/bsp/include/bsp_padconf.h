#ifndef MINIX_KERNEL_ARCH_EARM_BSP_INCLUDE_BSP_PADCONF_H_
#define MINIX_KERNEL_ARCH_EARM_BSP_INCLUDE_BSP_PADCONF_H_

#ifndef __ASSEMBLY__

void bsp_padconf_init(void);
int bsp_padconf_set(u32_t padconf, u32_t mask, u32_t value);

#endif /* __ASSEMBLY__ */

#endif // MINIX_KERNEL_ARCH_EARM_BSP_INCLUDE_BSP_PADCONF_H_
