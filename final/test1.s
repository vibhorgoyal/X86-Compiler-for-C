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
	subq	$32, %rsp
# t0  5
	movl	$5, -8(%rbp)
# n = t0
	movl	-8(%rbp), %eax
	movl	%eax, -4(%rbp)
# t1 = n * n
	movl	-4(%rbp), %eax
	imull	-4(%rbp), %eax
	movl	%eax, -16(%rbp)
# x = t1
	movl	-16(%rbp), %eax
	movl	%eax, -12(%rbp)
# PARAM x
# t2 = CALL printi 1
	movq	-12(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printi
	addq	$4, %rsp
# t3  0
	movl	$0, -24(%rbp)
# RETURN t3
	movq	-24(%rbp), %rax
	leave
	ret
# function main ends
	leave
	ret
	.size	main, .-main
