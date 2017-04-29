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
# t0 = 6
	movl	$6, -24(%rbp)
# n = t0
	movl	-24(%rbp), %eax
	movl	%eax, -4(%rbp)
# t1 = 0
	movl	$0, -28(%rbp)
# a = t1
	movl	-28(%rbp), %eax
	movl	%eax, -16(%rbp)
# t2 = 1
	movl	$1, -32(%rbp)
# b = t2
	movl	-32(%rbp), %eax
	movl	%eax, -20(%rbp)
# t3 = 2
	movl	$2, -36(%rbp)
# i = t3
	movl	-36(%rbp), %eax
	movl	%eax, -8(%rbp)
# IF i <= n GOTO .L0
.L2:
	movl	-8(%rbp), %eax
	cmpl	-4(%rbp), %eax
	jg	.L4
	jmp	.L0
.L4:
# t4 = 0
	movb	$0, -36(%rbp)
# GOTO .L1
	jmp	.L1
# t4 = 1
	movb	$1, -36(%rbp)
# GOTO .L1
	jmp	.L1
# t0 = i
.L3:
	movl	-8(%rbp), %eax
	movl	%eax, -24(%rbp)
# i = i + 1
	movl	-8(%rbp), %eax
	movl	$1, %edx
	addl	%edx, %eax
	movl	%eax, -8(%rbp)
# GOTO .L2
	jmp	.L2
# t5 = a + b
.L0:
	movl	-16(%rbp), %eax
	movl	-20(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -40(%rbp)
# res = t5
	movl	-40(%rbp), %eax
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
# t6 = CALL printi 1
	movq	-12(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printi
	movq	%rax, -44(%rbp)
	addq	$4, %rsp
# t7 = 0
	movl	$0, -48(%rbp)
# RETURN t7
	movq	-48(%rbp), %rax
	leave
	ret
# function main ends
	leave
	ret
	.size	main, .-main
