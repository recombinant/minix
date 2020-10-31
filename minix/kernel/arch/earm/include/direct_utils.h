#ifndef MINIX_KERNEL_ARCH_EARM_INCLUDE_DIRECT_UTILS_H_
#define MINIX_KERNEL_ARCH_EARM_INCLUDE_DIRECT_UTILS_H_

#include "kernel/kernel.h"

void direct_cls(void);
void direct_print(const char*);
void direct_print_char(char);
int direct_read_char(unsigned char*);

#endif // MINIX_KERNEL_ARCH_EARM_INCLUDE_DIRECT_UTILS_H_
