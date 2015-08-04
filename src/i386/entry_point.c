#include "multiboot.h"
#include "common.h"

int entry_point(struct multiboot* mboot_ptr, unsigned int esp){
	exix_main();
	return 0;
}
