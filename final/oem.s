.section	.rodata
# printi:
# prints:
# readi:
# even:
# odd:
# odd:
	.text
	.globl	odd
	.type	odd, @function
odd:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$32, %rsp
# t0 = 0
	movl	$0, -4(%rbp)
# IF x == t0 GOTO .L0
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
# t2 = 0
.L4:
	movl	$0, -8(%rbp)
# RETURN t2
	movq	-8(%rbp), %rax
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
# t3 = 1
.L3:
	movl	$1, -12(%rbp)
# t4 = x - t3
	movl	16(%rbp), %edx
	movl	-12(%rbp), %eax
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, -16(%rbp)
# PARAM t4
# t5 = CALL even 1
	movq	-16(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	even
	movq	%rax, -20(%rbp)
	addq	$4, %rsp
# RETURN t5
	movq	-20(%rbp), %rax
	leave
	ret
# function odd ends
	leave
	ret
	.size	odd, .-odd
# even:
	.text
	.globl	even
	.type	even, @function
even:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$32, %rsp
# t6 = 0
	movl	$0, -4(%rbp)
# IF x == t6 GOTO .L5
	movl	16(%rbp), %eax
	cmpl	-4(%rbp), %eax
	je	.L5
	jmp	.L12
.L12:
# t7 = 0
	movb	$0, -4(%rbp)
# GOTO .L6
	jmp	.L6
# t7 = 1
.L5:
	movb	$1, -4(%rbp)
# GOTO .L7
.L6:
	jmp	.L7
# t8 = 1
.L9:
	movl	$1, -8(%rbp)
# RETURN t8
	movq	-8(%rbp), %rax
	leave
	ret
# GOTO .L8
	jmp	.L8
# IF t7 != 0 GOTO .L9
.L7:
	movl	-4(%rbp), %eax
	cmpl	$0, %eax
	jne	.L9
	jmp	.L13
.L13:
# t9 = 1
.L8:
	movl	$1, -12(%rbp)
# t10 = x - t9
	movl	16(%rbp), %edx
	movl	-12(%rbp), %eax
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, -16(%rbp)
# PARAM t10
# t11 = CALL odd 1
	movq	-16(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	odd
	movq	%rax, -20(%rbp)
	addq	$4, %rsp
# RETURN t11
	movq	-20(%rbp), %rax
	leave
	ret
# function even ends
	leave
	ret
	.size	even, .-even
# main:
	.text
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$32, %rsp
# t12 = 9
	movl	$9, -12(%rbp)
# PARAM t12
# t13 = CALL even 1
	movq	-12(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	even
	movq	%rax, -16(%rbp)
	addq	$4, %rsp
# m = t13
	movl	-16(%rbp), %eax
	movl	%eax, -4(%rbp)
# PARAM m
# t14 = CALL printi 1
	movq	-4(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printi
	movq	%rax, -20(%rbp)
	addq	$4, %rsp
# t15 = 0
	movl	$0, -24(%rbp)
# RETURN t15
	movq	-24(%rbp), %rax
	leave
	ret
# function main ends
	leave
	ret
	.size	main, .-main
