#ifndef MINIX_KERNEL_ARCH_EARM_INCLUDE_HW_INTR_H_
#define MINIX_KERNEL_ARCH_EARM_INCLUDE_HW_INTR_H_

#include "kernel/kernel.h"
void irq_handle(int irq);

void hw_intr_mask(int irq);
void hw_intr_unmask(int irq);
void hw_intr_ack(int irq);
void hw_intr_used(int irq);
void hw_intr_not_used(int irq);
void hw_intr_disable_all(void);

#endif // MINIX_KERNEL_ARCH_EARM_INCLUDE_HW_INTR_H_
