;This is the mutliboot kernel header
;Slightly modified version of "Bran's Kernel Development"'s Version

;A bunch of magic numbers that multiboot compliant kernels need
MBOOT_PAGE_ALIGN	equ 1
MBOOT_MEM_INFO		equ 2
MBOOT_HEADER_MAGIC	equ 0x1BADB002
MBOOT_HEADER_FLAGS	equ MBOOT_PAGE_ALIGN | MBOOT_MEM_INFO
MBOOT_CHECKSUM		equ -(MBOOT_HEADER_MAGIC + MBOOT_HEADER_FLAGS)

	[BITS 32]		;32 Bit executable
	[GLOBAL mboot]		;Can be called from C
	[EXTERN code]		;Use 'code' from outside
	[EXTERN bss]		;Use 'bss' from outside
	[EXTERN end]		;Use 'end' from outside

mboot:				;This is simply a data section for the bootloader
	dd MBOOT_HEADER_MAGIC
	dd MBOOT_HEADER_FLAGS
	dd MBOOT_CHECKSUM

	dd mboot
	dd code
	dd bss
	dd end
	dd start

	[GLOBAL start]		;Kernel entry point
	[EXTERN entry_point]		;Use 'main' from outside

start:
	push esp		;Save initial stack pointer
	push ebx		;Save stack frame
	cli			;Disable interrupts
	call entry_point		;Call C entry point
	jmp $			;Hang when this ends

	[GLOBAL flush_tss]
flush_tss:
	mov ax, 0x2B
	ltr ax
	ret
