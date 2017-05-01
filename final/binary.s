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
	subq	$224, %rsp
# t0 = 10
	movl	$10, -28(%rbp)
# t1 = &m
	leaq	-12(%rbp), %rax
	movq	%rax, -76(%rbp)
# PARAM t1
# t2 = CALL readi 1
	movq	-76(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	readi
	movq	%rax, -80(%rbp)
	addq	$8, %rsp
# n = t2
	movl	-80(%rbp), %eax
	movl	%eax, -16(%rbp)
# t3 = 0
	movl	$0, -84(%rbp)
# i = t3
	movl	-84(%rbp), %eax
	movl	%eax, -4(%rbp)
# IF i < n GOTO .L0
.L2:
	movl	-4(%rbp), %eax
	cmpl	-16(%rbp), %eax
	jge	.L15
	jmp	.L0
.L15:
# t4 = 0
	movb	$0, -84(%rbp)
# GOTO .L1
	jmp	.L1
# t4 = 1
	movb	$1, -84(%rbp)
# GOTO .L1
	jmp	.L1
# t5 = 1
.L3:
	movl	$1, -88(%rbp)
# t6 = i + t5
	movl	-4(%rbp), %eax
	movl	-88(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -92(%rbp)
# i = t6
	movl	-92(%rbp), %eax
	movl	%eax, -4(%rbp)
# GOTO .L2
	jmp	.L2
# t7 = &m
.L0:
	leaq	-12(%rbp), %rax
	movq	%rax, -100(%rbp)
# PARAM t7
# t8 = CALL readi 1
	movq	-100(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	readi
	movq	%rax, -104(%rbp)
	addq	$8, %rsp
# y = t8
	movl	-104(%rbp), %eax
	movl	%eax, -20(%rbp)
# t9 = t0
	movl	-28(%rbp), %eax
	movl	%eax, -108(%rbp)
# t11 = i
	movl	-4(%rbp), %eax
	movl	%eax, -116(%rbp)
# t11 = t11 * 4
	movl	-116(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -116(%rbp)
# arr[t11] = y
	movl	-116(%rbp), %edx
	movl	-20(%rbp), %eax
cltq
	movl	%eax, -68(%rbp,%rdx,1)
# GOTO .L3
	jmp	.L3
# t13 = &m
.L1:
	leaq	-12(%rbp), %rax
	movq	%rax, -128(%rbp)
# PARAM t13
# t14 = CALL readi 1
	movq	-128(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	readi
	movq	%rax, -132(%rbp)
	addq	$8, %rsp
# k = t14
	movl	-132(%rbp), %eax
	movl	%eax, -24(%rbp)
# t15 = 0
	movl	$0, -148(%rbp)
# lo = t15
	movl	-148(%rbp), %eax
	movl	%eax, -136(%rbp)
# t16 = 1
	movl	$1, -152(%rbp)
# t17 = n - t16
	movl	-16(%rbp), %edx
	movl	-152(%rbp), %eax
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, -156(%rbp)
# hi = t17
	movl	-156(%rbp), %eax
	movl	%eax, -140(%rbp)
# IF lo < hi GOTO .L4
.L13:
	movl	-136(%rbp), %eax
	cmpl	-140(%rbp), %eax
	jge	.L16
	jmp	.L4
.L16:
# t18 = 0
	movb	$0, -156(%rbp)
# GOTO .L5
	jmp	.L5
# t18 = 1
.L4:
	movb	$1, -156(%rbp)
# GOTO .L6
.L5:
	jmp	.L6
# t19 = hi - lo
.L14:
	movl	-140(%rbp), %edx
	movl	-136(%rbp), %eax
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, -160(%rbp)
# t20 = 2
	movl	$2, -164(%rbp)
# t21 = t19 / t20
	movl	-160(%rbp), %eax
	cltd
	idivl	-164(%rbp)
	movl	%eax, -168(%rbp)
# t22 = lo + t21
	movl	-136(%rbp), %eax
	movl	-168(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -172(%rbp)
# mid = t22
	movl	-172(%rbp), %eax
	movl	%eax, -144(%rbp)
# t23 = t0
	movl	-28(%rbp), %eax
	movl	%eax, -176(%rbp)
# t25 = mid
	movl	-144(%rbp), %eax
	movl	%eax, -184(%rbp)
# t25 = t25 * 4
	movl	-184(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -184(%rbp)
# t27 = arr[t25]
	movl	-184(%rbp), %edx
cltq
	movl	-68(%rbp,%rdx,1), %eax
	movl	%eax, -192(%rbp)
# IF t27 > k GOTO .L7
	movl	-192(%rbp), %eax
	cmpl	-24(%rbp), %eax
	jle	.L17
	jmp	.L7
.L17:
# t28 = 0
	movb	$0, -192(%rbp)
# GOTO .L8
	jmp	.L8
# t28 = 1
.L7:
	movb	$1, -192(%rbp)
# GOTO .L9
.L8:
	jmp	.L9
# hi = mid
.L11:
	movl	-144(%rbp), %eax
	movl	%eax, -140(%rbp)
# GOTO .L10
	jmp	.L10
# t29 = 1
.L12:
	movl	$1, -196(%rbp)
# t30 = mid + t29
	movl	-144(%rbp), %eax
	movl	-196(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -200(%rbp)
# lo = t30
	movl	-200(%rbp), %eax
	movl	%eax, -136(%rbp)
# GOTO .L10
	jmp	.L10
# IF t28 != 0 GOTO .L11
.L9:
	movl	-192(%rbp), %eax
	cmpl	$0, %eax
	jne	.L11
	jmp	.L18
.L18:
# GOTO .L12
	jmp	.L12
# GOTO .L13
.L10:
	jmp	.L13
# IF t18 != 0 GOTO .L14
.L6:
	movl	-156(%rbp), %eax
	cmpl	$0, %eax
	jne	.L14
	jmp	.L19
.L19:
# PARAM hi
# t31 = CALL printi 1
	movq	-140(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printi
	movq	%rax, -204(%rbp)
	addq	$4, %rsp
# t32 = 0
	movl	$0, -208(%rbp)
# RETURN t32
	movq	-208(%rbp), %rax
	leave
	ret
# function main ends
	leave
	ret
	.size	main, .-main
