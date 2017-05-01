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
# t0 = 5
	movl	$5, -20(%rbp)
# t1 =  -t0
	movl	-20(%rbp), %eax
	negl	%eax
	movl	%eax, -24(%rbp)
# c = t1
	movl	-24(%rbp), %eax
	movl	%eax, -16(%rbp)
# t2 = 3
	movl	$3, -28(%rbp)
# a = t2
	movl	-28(%rbp), %eax
	movl	%eax, -4(%rbp)
# t3 = 4
	movl	$4, -32(%rbp)
# b = t3
	movl	-32(%rbp), %eax
	movl	%eax, -8(%rbp)
# t4 = a + c
	movl	-4(%rbp), %eax
	movl	-16(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -36(%rbp)
# res = t4
	movl	-36(%rbp), %eax
	movl	%eax, -12(%rbp)
# PARAM res
# t5 = CALL printi 1
	movq	-12(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printi
	movq	%rax, -40(%rbp)
	addq	$4, %rsp
# t6 = b - c
	movl	-8(%rbp), %edx
	movl	-16(%rbp), %eax
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, -44(%rbp)
# res = t6
	movl	-44(%rbp), %eax
	movl	%eax, -12(%rbp)
# PARAM res
# t7 = CALL printi 1
	movq	-12(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printi
	movq	%rax, -48(%rbp)
	addq	$4, %rsp
# PARAM c
# t8 = CALL printi 1
	movq	-16(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printi
	movq	%rax, -52(%rbp)
	addq	$4, %rsp
# t9 = 0
	movl	$0, -56(%rbp)
# RETURN t9
	movq	-56(%rbp), %rax
	leave
	ret
# function main ends
	leave
	ret
	.size	main, .-main
