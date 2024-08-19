.file	"StackAllocation.cpp"         # Specifies the name of the source file that was compiled.

.def	___main;	.scl	2;	.type	32;	.endef  # Defines metadata for the function `___main`, which is part of the startup code.

.text                                # Begins the code section where executable instructions are stored.
.globl	_main                       # Declares the `_main` function as global, making it accessible from outside this file.
.def	_main;	.scl	2;	.type	32;	.endef     # Defines metadata for the `_main` function.

_main:                               # The start of the `_main` function.
LFB0:                                
	.cfi_startproc                   # Marks the beginning of the function's stack frame information.
	pushl	%ebp                     # Saves the old base pointer by pushing it onto the stack.
	.cfi_def_cfa_offset 8            # Defines the current frame address as 8 bytes above the stack pointer.
	.cfi_offset 5, -8                # Records the location of the old base pointer (for debugging).
	movl	%esp, %ebp               # Sets the base pointer to the current stack pointer, creating a new stack frame.
	.cfi_def_cfa_register 5          # Defines the frame pointer register (EBP) for debugging.
	andl	$-16, %esp               # Aligns the stack pointer to a 16-byte boundary for performance optimization.
	subl	$16, %esp                # Allocates 16 bytes of space on the stack (for local variables).
	call	___main                  # Calls the `___main` function, which handles global/static initialization.
	movl	$42, 12(%esp)            # Stores the value 42 at an offset of 12 bytes from the stack pointer.
	movl	$0, %eax                 # Sets the return value of `_main` to 0 (standard C/C++ convention).
	leave                            # Cleans up the stack frame by restoring the old base pointer.
	.cfi_restore 5                   # Restores the base pointer register (EBP) for debugging.
	.cfi_def_cfa 4, 4                # Adjusts the frame address for debugging.
	ret                              # Returns from the `_main` function to the caller (typically the OS).
	.cfi_endproc                     # Marks the end of the function's stack frame information.
LFE0:                                

.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"  # Adds a version string identifying the compiler.
