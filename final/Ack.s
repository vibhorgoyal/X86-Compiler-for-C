.section	.rodata
# printi:
# prints:
# readi:
# ACK:
	.text
	.globl	ACK
	.type	ACK, @function
ACK:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$64, %rsp
# t0 = 0
	movl	$0, -4(%rbp)
# IF m == t0 GOTO .L0
	movl	16(%rbp), %eax
	cmpl	-4(%rbp), %eax
	je	.L0
	jmp	.L10
.L10:
# t1 = 0
	movb	$0, -4(%rbp)
# GOTO .L1
	jmp	.L1
# t1 = 1
.L0:
	movb	$1, -4(%rbp)
# GOTO .L2
.L1:
	jmp	.L2
# t2 = 1
.L4:
	movl	$1, -8(%rbp)
# t3 = n + t2
	movl	24(%rbp), %eax
	movl	-8(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -12(%rbp)
# RETURN t3
	movq	-12(%rbp), %rax
	leave
	ret
# GOTO .L3
	jmp	.L3
# IF t1 != 0 GOTO .L4
.L2:
	movl	-4(%rbp), %eax
	cmpl	$0, %eax
	jne	.L4
	jmp	.L11
.L11:
# t4 = 0
.L3:
	movl	$0, -16(%rbp)
# IF n == t4 GOTO .L5
	movl	24(%rbp), %eax
	cmpl	-16(%rbp), %eax
	je	.L5
	jmp	.L12
.L12:
# t5 = 0
	movb	$0, -16(%rbp)
# GOTO .L6
	jmp	.L6
# t5 = 1
.L5:
	movb	$1, -16(%rbp)
# GOTO .L7
.L6:
	jmp	.L7
# t6 = 1
.L9:
	movl	$1, -20(%rbp)
# t7 = m - t6
	movl	16(%rbp), %edx
	movl	-20(%rbp), %eax
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, -24(%rbp)
# t8 = 1
	movl	$1, -28(%rbp)
# PARAM t7
# PARAM t8
# t9 = CALL ACK 2
	movq	-28(%rbp), %rax
	pushq	%rax
	movq	%rax, %rsi
	movq	-24(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	ACK
	movq	%rax, -32(%rbp)
	addq	$8, %rsp
# RETURN t9
	movq	-32(%rbp), %rax
	leave
	ret
# GOTO .L8
	jmp	.L8
# IF t5 != 0 GOTO .L9
.L7:
	movl	-16(%rbp), %eax
	cmpl	$0, %eax
	jne	.L9
	jmp	.L13
.L13:
# t10 = 1
.L8:
	movl	$1, -40(%rbp)
# t11 = n - t10
	movl	24(%rbp), %edx
	movl	-40(%rbp), %eax
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, -44(%rbp)
# PARAM m
# PARAM t11
# t12 = CALL ACK 2
	movq	-44(%rbp), %rax
	pushq	%rax
	movq	%rax, %rsi
	movq	16(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	ACK
	movq	%rax, -48(%rbp)
	addq	$8, %rsp
# tmp = t12
	movl	-48(%rbp), %eax
	movl	%eax, -36(%rbp)
# t13 = 1
	movl	$1, -52(%rbp)
# t14 = m - t13
	movl	16(%rbp), %edx
	movl	-52(%rbp), %eax
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, -56(%rbp)
# PARAM t14
# PARAM tmp
# t15 = CALL ACK 2
	movq	-36(%rbp), %rax
	pushq	%rax
	movq	%rax, %rsi
	movq	-56(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	ACK
	movq	%rax, -60(%rbp)
	addq	$8, %rsp
# RETURN t15
	movq	-60(%rbp), %rax
	leave
	ret
# function ACK ends
	leave
	ret
	.size	ACK, .-ACK
# main:
	.text
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$48, %rsp
# t16 = 3
	movl	$3, -20(%rbp)
# m = t16
	movl	-20(%rbp), %eax
	movl	%eax, -4(%rbp)
# t17 = 1
	movl	$1, -24(%rbp)
# n = t17
	movl	-24(%rbp), %eax
	movl	%eax, -8(%rbp)
# PARAM m
# PARAM n
# t18 = CALL ACK 2
	movq	-8(%rbp), %rax
	pushq	%rax
	movq	%rax, %rsi
	movq	-4(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	ACK
	movq	%rax, -28(%rbp)
	addq	$8, %rsp
# x = t18
	movl	-28(%rbp), %eax
	movl	%eax, -12(%rbp)
# PARAM x
# t19 = CALL printi 1
	movq	-12(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printi
	movq	%rax, -32(%rbp)
	addq	$4, %rsp
# t20 = 0
	movl	$0, -36(%rbp)
# RETURN t20
	movq	-36(%rbp), %rax
	leave
	ret
# function main ends
	leave
	ret
	.size	main, .-main
