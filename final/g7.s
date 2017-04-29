.section	.rodata
# printi:
# prints:
# readi:
# func:
	.text
	.globl	func
	.type	func, @function
func:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$32, %rsp
# t0 = a + b
	movl	16(%rbp), %eax
	movl	24(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -4(%rbp)
# t1 = t0 + c
	movl	-4(%rbp), %eax
	movl	32(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -8(%rbp)
# t2 = t1 + d
	movl	-8(%rbp), %eax
	movl	40(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -12(%rbp)
# t3 = t2 + e
	movl	-12(%rbp), %eax
	movl	48(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -16(%rbp)
# t4 = t3 + f
	movl	-16(%rbp), %eax
	movl	56(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -20(%rbp)
# t5 = t4 + g
	movl	-20(%rbp), %eax
	movl	64(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -24(%rbp)
# t6 = t5 + h
	movl	-24(%rbp), %eax
	movl	72(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -28(%rbp)
# RETURN t6
	movq	-28(%rbp), %rax
	leave
	ret
# function func ends
	leave
	ret
	.size	func, .-func
# main:
	.text
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$64, %rsp
# t7 = 1
	movl	$1, -12(%rbp)
# t8 = 2
	movl	$2, -16(%rbp)
# t9 = 3
	movl	$3, -20(%rbp)
# t10 = 4
	movl	$4, -24(%rbp)
# t11 = 5
	movl	$5, -28(%rbp)
# t12 = 6
	movl	$6, -32(%rbp)
# t13 = 7
	movl	$7, -36(%rbp)
# t14 = 8
	movl	$8, -40(%rbp)
# PARAM t7
# PARAM t8
# PARAM t9
# PARAM t10
# PARAM t11
# PARAM t12
# PARAM t13
# PARAM t14
# t15 = CALL func 8
	movq	-40(%rbp), %rax
	pushq	%rax
	movq	-36(%rbp), %rax
	pushq	%rax
	movq	-32(%rbp), %rax
	pushq	%rax
	movq	%rax, %r9
	movq	-28(%rbp), %rax
	pushq	%rax
	movq	%rax, %r8
	movq	-24(%rbp), %rax
	pushq	%rax
	movq	%rax, %rcx
	movq	-20(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdx
	movq	-16(%rbp), %rax
	pushq	%rax
	movq	%rax, %rsi
	movq	-12(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	func
	movq	%rax, -44(%rbp)
	addq	$32, %rsp
# m = t15
	movl	-44(%rbp), %eax
	movl	%eax, -4(%rbp)
# PARAM m
# t16 = CALL printi 1
	movq	-4(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printi
	movq	%rax, -48(%rbp)
	addq	$4, %rsp
# t17 = 0
	movl	$0, -52(%rbp)
# RETURN t17
	movq	-52(%rbp), %rax
	leave
	ret
# function main ends
	leave
	ret
	.size	main, .-main
