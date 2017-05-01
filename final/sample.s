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
	subq	$320, %rsp
# t0 = 5
	movl	$5, -4(%rbp)
# t1 = 3
	movl	$3, -56(%rbp)
# n = t1
	movl	-56(%rbp), %eax
	movl	%eax, -28(%rbp)
# t2 = 0
	movl	$0, -60(%rbp)
# i = t2
	movl	-60(%rbp), %eax
	movl	%eax, -44(%rbp)
# IF i < n GOTO .L0
.L2:
	movl	-44(%rbp), %eax
	cmpl	-28(%rbp), %eax
	jge	.L21
	jmp	.L0
.L21:
# t3 = 0
	movb	$0, -60(%rbp)
# GOTO .L1
	jmp	.L1
# t3 = 1
	movb	$1, -60(%rbp)
# GOTO .L1
	jmp	.L1
# t4 = 1
.L3:
	movl	$1, -64(%rbp)
# t5 = i + t4
	movl	-44(%rbp), %eax
	movl	-64(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -68(%rbp)
# i = t5
	movl	-68(%rbp), %eax
	movl	%eax, -44(%rbp)
# GOTO .L2
	jmp	.L2
# t6 = &mu
.L0:
	leaq	-52(%rbp), %rax
	movq	%rax, -76(%rbp)
# PARAM t6
# t7 = CALL readi 1
	movq	-76(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	readi
	movq	%rax, -80(%rbp)
	addq	$8, %rsp
# hu = t7
	movl	-80(%rbp), %eax
	movl	%eax, -48(%rbp)
# t8 = t0
	movl	-4(%rbp), %eax
	movl	%eax, -84(%rbp)
# t10 = i
	movl	-44(%rbp), %eax
	movl	%eax, -92(%rbp)
# t10 = t10 * 4
	movl	-92(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -92(%rbp)
# array[t10] = hu
	movl	-92(%rbp), %edx
	movl	-48(%rbp), %eax
cltq
	movl	%eax, -24(%rbp,%rdx,1)
# GOTO .L3
	jmp	.L3
# t12 = 0
.L1:
	movl	$0, -100(%rbp)
# c = t12
	movl	-100(%rbp), %eax
	movl	%eax, -32(%rbp)
# t13 = 1
.L6:
	movl	$1, -104(%rbp)
# t14 = n - t13
	movl	-28(%rbp), %edx
	movl	-104(%rbp), %eax
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, -108(%rbp)
# IF c < t14 GOTO .L4
	movl	-32(%rbp), %eax
	cmpl	-108(%rbp), %eax
	jge	.L22
	jmp	.L4
.L22:
# t15 = 0
	movb	$0, -108(%rbp)
# GOTO .L5
	jmp	.L5
# t15 = 1
	movb	$1, -108(%rbp)
# GOTO .L5
	jmp	.L5
# t16 = 1
.L16:
	movl	$1, -112(%rbp)
# t17 = c + t16
	movl	-32(%rbp), %eax
	movl	-112(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -116(%rbp)
# c = t17
	movl	-116(%rbp), %eax
	movl	%eax, -32(%rbp)
# GOTO .L6
	jmp	.L6
# t18 = 0
.L4:
	movl	$0, -120(%rbp)
# d = t18
	movl	-120(%rbp), %eax
	movl	%eax, -36(%rbp)
# t19 = n - c
.L9:
	movl	-28(%rbp), %edx
	movl	-32(%rbp), %eax
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, -124(%rbp)
# t20 = 1
	movl	$1, -128(%rbp)
# t21 = t19 - t20
	movl	-124(%rbp), %edx
	movl	-128(%rbp), %eax
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, -132(%rbp)
# IF d < t21 GOTO .L7
	movl	-36(%rbp), %eax
	cmpl	-132(%rbp), %eax
	jge	.L23
	jmp	.L7
.L23:
# t22 = 0
	movb	$0, -132(%rbp)
# GOTO .L8
	jmp	.L8
# t22 = 1
	movb	$1, -132(%rbp)
# GOTO .L8
	jmp	.L8
# t23 = 1
.L15:
	movl	$1, -136(%rbp)
# t24 = d + t23
	movl	-36(%rbp), %eax
	movl	-136(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -140(%rbp)
# d = t24
	movl	-140(%rbp), %eax
	movl	%eax, -36(%rbp)
# GOTO .L9
	jmp	.L9
# t25 = t0
.L7:
	movl	-4(%rbp), %eax
	movl	%eax, -144(%rbp)
# t27 = d
	movl	-36(%rbp), %eax
	movl	%eax, -152(%rbp)
# t27 = t27 * 4
	movl	-152(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -152(%rbp)
# t29 = array[t27]
	movl	-152(%rbp), %edx
cltq
	movl	-24(%rbp,%rdx,1), %eax
	movl	%eax, -160(%rbp)
# t30 = 1
	movl	$1, -164(%rbp)
# t31 = d + t30
	movl	-36(%rbp), %eax
	movl	-164(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -168(%rbp)
# t32 = t0
	movl	-4(%rbp), %eax
	movl	%eax, -172(%rbp)
# t34 = t31
	movl	-168(%rbp), %eax
	movl	%eax, -180(%rbp)
# t34 = t34 * 4
	movl	-180(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -180(%rbp)
# t36 = array[t34]
	movl	-180(%rbp), %edx
cltq
	movl	-24(%rbp,%rdx,1), %eax
	movl	%eax, -188(%rbp)
# IF t29 > t36 GOTO .L10
	movl	-160(%rbp), %eax
	cmpl	-188(%rbp), %eax
	jle	.L24
	jmp	.L10
.L24:
# t37 = 0
	movb	$0, -188(%rbp)
# GOTO .L11
	jmp	.L11
# t37 = 1
.L10:
	movb	$1, -188(%rbp)
# GOTO .L12
.L11:
	jmp	.L12
# t38 = t0
.L14:
	movl	-4(%rbp), %eax
	movl	%eax, -192(%rbp)
# t40 = d
	movl	-36(%rbp), %eax
	movl	%eax, -200(%rbp)
# t40 = t40 * 4
	movl	-200(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -200(%rbp)
# t42 = array[t40]
	movl	-200(%rbp), %edx
cltq
	movl	-24(%rbp,%rdx,1), %eax
	movl	%eax, -208(%rbp)
# swap = t42
	movl	-208(%rbp), %eax
	movl	%eax, -40(%rbp)
# t43 = 1
	movl	$1, -212(%rbp)
# t44 = d + t43
	movl	-36(%rbp), %eax
	movl	-212(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -216(%rbp)
# t45 = t0
	movl	-4(%rbp), %eax
	movl	%eax, -220(%rbp)
# t47 = t44
	movl	-216(%rbp), %eax
	movl	%eax, -228(%rbp)
# t47 = t47 * 4
	movl	-228(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -228(%rbp)
# t49 = array[t47]
	movl	-228(%rbp), %edx
cltq
	movl	-24(%rbp,%rdx,1), %eax
	movl	%eax, -236(%rbp)
# t50 = t0
	movl	-4(%rbp), %eax
	movl	%eax, -240(%rbp)
# t52 = d
	movl	-36(%rbp), %eax
	movl	%eax, -248(%rbp)
# t52 = t52 * 4
	movl	-248(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -248(%rbp)
# array[t52] = t49
	movl	-248(%rbp), %edx
	movl	-236(%rbp), %eax
cltq
	movl	%eax, -24(%rbp,%rdx,1)
# t54 = 1
	movl	$1, -256(%rbp)
# t55 = d + t54
	movl	-36(%rbp), %eax
	movl	-256(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -260(%rbp)
# t56 = t0
	movl	-4(%rbp), %eax
	movl	%eax, -264(%rbp)
# t58 = t55
	movl	-260(%rbp), %eax
	movl	%eax, -272(%rbp)
# t58 = t58 * 4
	movl	-272(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -272(%rbp)
# array[t58] = swap
	movl	-272(%rbp), %edx
	movl	-40(%rbp), %eax
cltq
	movl	%eax, -24(%rbp,%rdx,1)
# GOTO .L13
	jmp	.L13
# IF t37 != 0 GOTO .L14
.L12:
	movl	-188(%rbp), %eax
	cmpl	$0, %eax
	jne	.L14
	jmp	.L25
.L25:
# GOTO .L15
.L13:
	jmp	.L15
# GOTO .L16
.L8:
	jmp	.L16
# t60 = 0
.L5:
	movl	$0, -280(%rbp)
# c = t60
	movl	-280(%rbp), %eax
	movl	%eax, -32(%rbp)
# IF c < n GOTO .L17
.L19:
	movl	-32(%rbp), %eax
	cmpl	-28(%rbp), %eax
	jge	.L26
	jmp	.L17
.L26:
# t61 = 0
	movb	$0, -280(%rbp)
# GOTO .L18
	jmp	.L18
# t61 = 1
	movb	$1, -280(%rbp)
# GOTO .L18
	jmp	.L18
# t62 = 1
.L20:
	movl	$1, -284(%rbp)
# t63 = c + t62
	movl	-32(%rbp), %eax
	movl	-284(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -288(%rbp)
# c = t63
	movl	-288(%rbp), %eax
	movl	%eax, -32(%rbp)
# GOTO .L19
	jmp	.L19
# t64 = t0
.L17:
	movl	-4(%rbp), %eax
	movl	%eax, -292(%rbp)
# t66 = c
	movl	-32(%rbp), %eax
	movl	%eax, -300(%rbp)
# t66 = t66 * 4
	movl	-300(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -300(%rbp)
# t68 = array[t66]
	movl	-300(%rbp), %edx
cltq
	movl	-24(%rbp,%rdx,1), %eax
	movl	%eax, -308(%rbp)
# PARAM t68
# t69 = CALL printi 1
	movq	-308(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printi
	movq	%rax, -312(%rbp)
	addq	$4, %rsp
# GOTO .L20
	jmp	.L20
# t70 = 0
.L18:
	movl	$0, -316(%rbp)
# RETURN t70
	movq	-316(%rbp), %rax
	leave
	ret
# function main ends
	leave
	ret
	.size	main, .-main
