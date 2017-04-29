.section	.rodata
# printi:
# prints:
# readi:
# fac:
	.text
	.globl	fac
	.type	fac, @function
fac:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$16, %rsp
# t0 = 1
	movl	$1, -4(%rbp)
# IF n == t0 GOTO .L0
	movl	16(%rbp), %eax
	cmpl	-4(%rbp), %eax
	jne	.L5
	jmp	.L0
.L5:
# t1 = 0
	movb	$48, -4(%rbp)
# GOTO .L1
	jmp	.L1
# t1 = 1
.L0:
	movb	$49, -4(%rbp)
# GOTO .L2
.L1:
	jmp	.L2
# t2 = 6
.L4:
	movl	$6, -8(%rbp)
# n = t2
	movl	-8(%rbp), %eax
	movl	%eax, 16(%rbp)
# GOTO .L3
	jmp	.L3
# IF t1 != 0 GOTO .L4
.L2:
	movl	-4(%rbp), %eax
	cmpl	$0, %eax
	je	.L4
	jmp	.L6
.L6:
# t3 = n * n
.L3:
	movl	16(%rbp), %eax
	imull	16(%rbp), %eax
	movl	%eax, -12(%rbp)
# RETURN t3
	movq	-12(%rbp), %rax
	leave
	ret
# function fac ends
	leave
	ret
	.size	fac, .-fac
# main:
	.text
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$32, %rsp
# t4 = 5
	movl	$5, -8(%rbp)
# n = t4
	movl	-8(%rbp), %eax
	movl	%eax, -4(%rbp)
# PARAM n
# t5CALL fac 1
	movq	-4(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	fac
	movq	%rax, -16(%rbp)
	addq	$4, %rsp
# x = t5
	movl	-16(%rbp), %eax
	movl	%eax, -12(%rbp)
# PARAM x
# t6CALL printi 1
	movq	-12(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printi
	movq	%rax, -20(%rbp)
	addq	$4, %rsp
# t7 = 0
	movl	$0, -24(%rbp)
# RETURN t7
	movq	-24(%rbp), %rax
	leave
	ret
# function main ends
	leave
	ret
	.size	main, .-main
