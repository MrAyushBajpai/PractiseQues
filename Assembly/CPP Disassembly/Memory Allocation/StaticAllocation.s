.file	"StaticAllocation.cpp"       # Specifies the name of the source file that was compiled.

.data                              # Begins the data section where initialized data is stored.
.align 4                           # Aligns the next data on a 4-byte boundary for efficient access.
__ZL1x:                            # Defines a static variable `x` (with a mangled name) in memory.
	.long	42                   # Stores the integer value 42 at the memory location for `x`.

.def	___main;	.scl	2;	.type	32;	.endef  # Defines metadata for the function `___main`, part of the startup code.

.text                              # Begins the code section where the actual code (text) is stored.
.globl	_main                     # Declares the `_main` function as global so it's accessible externally.
.def	_main;	.scl	2;	.type	32;	.endef     # Defines metadata for the `_main` function.

_main:                             # The start of the `_main` function.
LFB0:                              
	.cfi_startproc                 # Marks the beginning of the function for debugging and exception handling. CFI - Call Frame Information
	pushl	%ebp                   # Saves the old base pointer by pushing it onto the stack.
	.cfi_def_cfa_offset 8          # Defines the current frame address as 8 bytes above the stack pointer.
	.cfi_offset 5, -8              # Records the location of the old base pointer (for debugging).
	movl	%esp, %ebp             # Sets the base pointer to the current stack pointer, creating a new stack frame.
	.cfi_def_cfa_register 5        # Defines the frame pointer register (EBP) for debugging.
	andl	$-16, %esp             # Aligns the stack pointer to a 16-byte boundary for performance optimization.
	call	___main                # Calls the `___main` function, which handles global/static initialization.
	movl	$0, %eax               # Sets the return value of `_main` to 0 (standard C/C++ convention).
	leave                          # Cleans up the stack frame by restoring the old base pointer.
	.cfi_restore 5                 # Restores the base pointer register (EBP) for debugging.
	.cfi_def_cfa 4, 4              # Adjusts the frame address for debugging.
	ret                            # Returns from the `_main` function to the caller (typically the OS).
	.cfi_endproc                   # Marks the end of the function for debugging and exception handling.
LFE0:                              

.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"  # Adds a version string identifying the compiler.
