ENTRY(reset)

MEMORY{
	Mem (rwx):ORIGIN = 0X00000000 , LENGTH = 64M
}

SECTIONS{
	
	. = 0X10000;
	.ahmed_startup . :
	{
		Startup.o(.text)
	}> Mem

	.ahmed_text_rodata :
	{
		*(.text) *(.rodata)
	}> Mem

	.ahmed_data :
	{
		*(.data)
	}> Mem

	.ahmed_bss :
	{
		*(.bss)
	}> Mem

	.= . +0x1000;
	stack_top = . ;
}