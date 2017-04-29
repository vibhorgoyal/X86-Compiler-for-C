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
	subq	$96, %rsp
# t0 = 10
	movl	$10, -4(%rbp)
# t1 = &n
	leaq	-12(%rbp), %rax
	movq	%rax, -24(%rbp)
# PARAM t1
# t2 = CALL readi 1
	movq	-24(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	readi
	movq	%rax, -28(%rbp)
	addq	$4, %rsp
# m = t2
	movl	-28(%rbp), %eax
	movl	%eax, -16(%rbp)
# PARAM m
# t3 = CALL printi 1
	movq	-16(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printi
	movq	%rax, -32(%rbp)
	addq	$4, %rsp
# t4 = 0
	movl	$0, -36(%rbp)
# t5 = t0
	movl	-4(%rbp), %eax
	movl	%eax, -40(%rbp)
# t7 = t4
	movl	-36(%rbp), %eax
	movl	%eax, -48(%rbp)
# t7 = t7 * 4
	movl	-48(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -48(%rbp)
# arr[=] = t7
	movl	0(%rbp), %edx
	movl	-48(%rbp), %eax
cltq
	movl	%eax, -8(%rbp,%rdx,1)
# t9 = 0
	movl	$0, -56(%rbp)
# t10 = t0
	movl	-4(%rbp), %eax
	movl	%eax, -60(%rbp)
# t12 = t9
	movl	-56(%rbp), %eax
	movl	%eax, -68(%rbp)
# t12 = t12 * 4
	movl	-68(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -68(%rbp)
# t14 = arr[t12]
	movl	-68(%rbp), %edx
cltq
	movl	-8(%rbp,%rdx,1), %eax
	movl	%eax, -76(%rbp)
# tm = t14
	movl	-76(%rbp), %eax
	movl	%eax, -20(%rbp)
# PARAM tm
# t15 = CALL printi 1
	movq	-20(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printi
	movq	%rax, -80(%rbp)
	addq	$4, %rsp
# t16 = 0
	movl	$0, -84(%rbp)
# RETURN t16
	movq	-84(%rbp), %rax
	leave
	ret
# function main ends
	leave
	ret
	.size	main, .-main
