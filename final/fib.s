.section	.rodata
# printi:
# prints:
# readi:
# main:
	.text
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$64, %rsp
# t0 = &tmp
	leaq	-24(%rbp), %rax
	movq	%rax, -32(%rbp)
# PARAM t0
# t1 = CALL readi 1
	movq	-32(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	readi
	movq	%rax, -36(%rbp)
	addq	$8, %rsp
# n = t1
	movl	-36(%rbp), %eax
	movl	%eax, -4(%rbp)
# t2 = 0
	movl	$0, -40(%rbp)
# a = t2
	movl	-40(%rbp), %eax
	movl	%eax, -16(%rbp)
# t3 = 1
	movl	$1, -44(%rbp)
# b = t3
	movl	-44(%rbp), %eax
	movl	%eax, -20(%rbp)
# t4 = 2
	movl	$2, -48(%rbp)
# i = t4
	movl	-48(%rbp), %eax
	movl	%eax, -8(%rbp)
# IF i <= n GOTO .L0
.L2:
	movl	-8(%rbp), %eax
	cmpl	-4(%rbp), %eax
	jg	.L4
	jmp	.L0
.L4:
# t5 = 0
	movb	$0, -48(%rbp)
# GOTO .L1
	jmp	.L1
# t5 = 1
	movb	$1, -48(%rbp)
# GOTO .L1
	jmp	.L1
# t0 = i
.L3:
	movq	-8(%rbp), %rax
	movq	%rax, -32(%rbp)
# i = i + 1
	movl	-8(%rbp), %eax
	movl	$1, %edx
	addl	%edx, %eax
	movl	%eax, -8(%rbp)
# GOTO .L2
	jmp	.L2
# t6 = a + b
.L0:
	movl	-16(%rbp), %eax
	movl	-20(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -52(%rbp)
# res = t6
	movl	-52(%rbp), %eax
	movl	%eax, -12(%rbp)
# a = b
	movl	-20(%rbp), %eax
	movl	%eax, -16(%rbp)
# b = res
	movl	-12(%rbp), %eax
	movl	%eax, -20(%rbp)
# GOTO .L3
	jmp	.L3
# PARAM res
.L1:
# t7 = CALL printi 1
	movq	-12(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printi
	movq	%rax, -56(%rbp)
	addq	$4, %rsp
# t8 = 0
	movl	$0, -60(%rbp)
# RETURN t8
	movq	-60(%rbp), %rax
	leave
	ret
# function main ends
	leave
	ret
	.size	main, .-main
