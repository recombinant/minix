#ifndef MINIX_KERNEL_ARCH_EARM_BSP_INCLUDE_BSP_INTR_H_
#define MINIX_KERNEL_ARCH_EARM_BSP_INCLUDE_BSP_INTR_H_

#ifndef __ASSEMBLY__

void bsp_irq_unmask(int irq);
void bsp_irq_mask(int irq);
void bsp_irq_handle(void);

#endif /* __ASSEMBLY__ */

#endif // MINIX_KERNEL_ARCH_EARM_BSP_INCLUDE_BSP_INTR_H_
