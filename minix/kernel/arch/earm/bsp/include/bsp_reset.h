#ifndef MINIX_KERNEL_ARCH_EARM_BSP_INCLUDE_BSP_RESET_H_
#define MINIX_KERNEL_ARCH_EARM_BSP_INCLUDE_BSP_RESET_H_

void bsp_reset_init(void);
void bsp_reset(void);
void bsp_poweroff(void);
void bsp_disable_watchdog(void);

#endif // MINIX_KERNEL_ARCH_EARM_BSP_INCLUDE_BSP_RESET_H_
