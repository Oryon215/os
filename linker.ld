SECTIONS
{
    . = 0x1000; /* Set the starting address of the kernel */

    .text : { *(.text) } /* Code section */

    .rodata : { *(.rodata) } /* Read-only data section */

    .data : { *(.data) } /* Initialized data section */

    .bss : { *(.bss) } /* Uninitialized data section */
	
	/DISCARD/ : { *(.eh_frame) } /* Discard unnecessary sections */

}