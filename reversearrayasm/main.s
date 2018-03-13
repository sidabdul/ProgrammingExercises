	.file	"main.c"
	.text
	.globl	rvereseArray
	.type	rvereseArray, @function
rvereseArray:
.LFB0:
	.cfi_startproc
	cmpl	%edx, %esi
	jge	.L6
	subq	$8, %rsp
	.cfi_def_cfa_offset 16
	movslq	%esi, %rax
	leaq	(%rdi,%rax,4), %rcx
	movl	(%rcx), %r8d
	movslq	%edx, %rax
	leaq	(%rdi,%rax,4), %rax
	movl	(%rax), %r9d
	movl	%r9d, (%rcx)
	movl	%r8d, (%rax)
	subl	$1, %edx
	addl	$1, %esi
	call	rvereseArray
	addq	$8, %rsp
	.cfi_def_cfa_offset 8
.L6:
	rep ret
	.cfi_endproc
.LFE0:
	.size	rvereseArray, .-rvereseArray
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.3) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
