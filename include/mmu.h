#ifndef __MMU_H
#define __MMU_H

#include "common.h"

//Required from ARCH
extern const int PAGE_SIZE;
extern void mmu_map(uint phys, uint virt);
extern void mmu_umap(uint phys, uint virt);

//Generic
uint align_address(uint address);
void identity_map();

#endif
