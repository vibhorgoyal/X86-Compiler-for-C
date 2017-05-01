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
	subq	$432, %rsp
# t0 = 2
	movl	$2, -4(%rbp)
# t1 = 2
	movl	$2, -8(%rbp)
# t2 = 2
	movl	$2, -12(%rbp)
# t3 = 2
	movl	$2, -16(%rbp)
# t4 = 2
	movl	$2, -20(%rbp)
# t5 = 2
	movl	$2, -24(%rbp)
# t6 = 0
	movl	$0, -96(%rbp)
# t7 = 0
	movl	$0, -100(%rbp)
# t8 = 1
	movl	$1, -104(%rbp)
# t9 = t1
	movl	-8(%rbp), %eax
	movl	%eax, -108(%rbp)
# t11 = t7
	movl	-100(%rbp), %eax
	movl	%eax, -116(%rbp)
# t12 = t6 * t9
	movl	-96(%rbp), %eax
	imull	-108(%rbp), %eax
	movl	%eax, -120(%rbp)
# t9 = t9 * t0
	movl	-108(%rbp), %eax
	imull	-4(%rbp), %eax
	movl	%eax, -108(%rbp)
# t10 = t12 + t11
	movl	-120(%rbp), %eax
	movl	-116(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -112(%rbp)
# t10 = t10 * 4
	movl	-112(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -112(%rbp)
# arr1[t10] = t8
	movl	-112(%rbp), %edx
	movl	-104(%rbp), %eax
cltq
	movl	%eax, -40(%rbp,%rdx,1)
# t13 = 0
	movl	$0, -124(%rbp)
# t14 = 1
	movl	$1, -128(%rbp)
# t15 = 2
	movl	$2, -132(%rbp)
# t16 = t1
	movl	-8(%rbp), %eax
	movl	%eax, -136(%rbp)
# t18 = t14
	movl	-128(%rbp), %eax
	movl	%eax, -144(%rbp)
# t19 = t13 * t16
	movl	-124(%rbp), %eax
	imull	-136(%rbp), %eax
	movl	%eax, -148(%rbp)
# t16 = t16 * t0
	movl	-136(%rbp), %eax
	imull	-4(%rbp), %eax
	movl	%eax, -136(%rbp)
# t17 = t19 + t18
	movl	-148(%rbp), %eax
	movl	-144(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -140(%rbp)
# t17 = t17 * 4
	movl	-140(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -140(%rbp)
# arr1[t17] = t15
	movl	-140(%rbp), %edx
	movl	-132(%rbp), %eax
cltq
	movl	%eax, -40(%rbp,%rdx,1)
# t20 = 1
	movl	$1, -152(%rbp)
# t21 = 0
	movl	$0, -156(%rbp)
# t22 = 2
	movl	$2, -160(%rbp)
# t23 = t1
	movl	-8(%rbp), %eax
	movl	%eax, -164(%rbp)
# t25 = t21
	movl	-156(%rbp), %eax
	movl	%eax, -172(%rbp)
# t26 = t20 * t23
	movl	-152(%rbp), %eax
	imull	-164(%rbp), %eax
	movl	%eax, -176(%rbp)
# t23 = t23 * t0
	movl	-164(%rbp), %eax
	imull	-4(%rbp), %eax
	movl	%eax, -164(%rbp)
# t24 = t26 + t25
	movl	-176(%rbp), %eax
	movl	-172(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -168(%rbp)
# t24 = t24 * 4
	movl	-168(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -168(%rbp)
# arr1[t24] = t22
	movl	-168(%rbp), %edx
	movl	-160(%rbp), %eax
cltq
	movl	%eax, -40(%rbp,%rdx,1)
# t27 = 1
	movl	$1, -180(%rbp)
# t28 = 1
	movl	$1, -184(%rbp)
# t29 = 2
	movl	$2, -188(%rbp)
# t30 = t1
	movl	-8(%rbp), %eax
	movl	%eax, -192(%rbp)
# t32 = t28
	movl	-184(%rbp), %eax
	movl	%eax, -200(%rbp)
# t33 = t27 * t30
	movl	-180(%rbp), %eax
	imull	-192(%rbp), %eax
	movl	%eax, -204(%rbp)
# t30 = t30 * t0
	movl	-192(%rbp), %eax
	imull	-4(%rbp), %eax
	movl	%eax, -192(%rbp)
# t31 = t33 + t32
	movl	-204(%rbp), %eax
	movl	-200(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -196(%rbp)
# t31 = t31 * 4
	movl	-196(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -196(%rbp)
# arr1[t31] = t29
	movl	-196(%rbp), %edx
	movl	-188(%rbp), %eax
cltq
	movl	%eax, -40(%rbp,%rdx,1)
# t34 = 0
	movl	$0, -208(%rbp)
# t35 = 0
	movl	$0, -212(%rbp)
# t36 = 1
	movl	$1, -216(%rbp)
# t37 = t3
	movl	-16(%rbp), %eax
	movl	%eax, -220(%rbp)
# t39 = t35
	movl	-212(%rbp), %eax
	movl	%eax, -228(%rbp)
# t40 = t34 * t37
	movl	-208(%rbp), %eax
	imull	-220(%rbp), %eax
	movl	%eax, -232(%rbp)
# t37 = t37 * t2
	movl	-220(%rbp), %eax
	imull	-12(%rbp), %eax
	movl	%eax, -220(%rbp)
# t38 = t40 + t39
	movl	-232(%rbp), %eax
	movl	-228(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -224(%rbp)
# t38 = t38 * 4
	movl	-224(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -224(%rbp)
# arr2[t38] = t36
	movl	-224(%rbp), %edx
	movl	-216(%rbp), %eax
cltq
	movl	%eax, -56(%rbp,%rdx,1)
# t41 = 0
	movl	$0, -236(%rbp)
# t42 = 1
	movl	$1, -240(%rbp)
# t43 = 1
	movl	$1, -244(%rbp)
# t44 = t3
	movl	-16(%rbp), %eax
	movl	%eax, -248(%rbp)
# t46 = t42
	movl	-240(%rbp), %eax
	movl	%eax, -256(%rbp)
# t47 = t41 * t44
	movl	-236(%rbp), %eax
	imull	-248(%rbp), %eax
	movl	%eax, -260(%rbp)
# t44 = t44 * t2
	movl	-248(%rbp), %eax
	imull	-12(%rbp), %eax
	movl	%eax, -248(%rbp)
# t45 = t47 + t46
	movl	-260(%rbp), %eax
	movl	-256(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -252(%rbp)
# t45 = t45 * 4
	movl	-252(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -252(%rbp)
# arr2[t45] = t43
	movl	-252(%rbp), %edx
	movl	-244(%rbp), %eax
cltq
	movl	%eax, -56(%rbp,%rdx,1)
# t48 = 1
	movl	$1, -264(%rbp)
# t49 = 0
	movl	$0, -268(%rbp)
# t50 = 1
	movl	$1, -272(%rbp)
# t51 = t3
	movl	-16(%rbp), %eax
	movl	%eax, -276(%rbp)
# t53 = t49
	movl	-268(%rbp), %eax
	movl	%eax, -284(%rbp)
# t54 = t48 * t51
	movl	-264(%rbp), %eax
	imull	-276(%rbp), %eax
	movl	%eax, -288(%rbp)
# t51 = t51 * t2
	movl	-276(%rbp), %eax
	imull	-12(%rbp), %eax
	movl	%eax, -276(%rbp)
# t52 = t54 + t53
	movl	-288(%rbp), %eax
	movl	-284(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -280(%rbp)
# t52 = t52 * 4
	movl	-280(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -280(%rbp)
# arr2[t52] = t50
	movl	-280(%rbp), %edx
	movl	-272(%rbp), %eax
cltq
	movl	%eax, -56(%rbp,%rdx,1)
# t55 = 1
	movl	$1, -292(%rbp)
# t56 = 1
	movl	$1, -296(%rbp)
# t57 = 1
	movl	$1, -300(%rbp)
# t58 = t3
	movl	-16(%rbp), %eax
	movl	%eax, -304(%rbp)
# t60 = t56
	movl	-296(%rbp), %eax
	movl	%eax, -312(%rbp)
# t61 = t55 * t58
	movl	-292(%rbp), %eax
	imull	-304(%rbp), %eax
	movl	%eax, -316(%rbp)
# t58 = t58 * t2
	movl	-304(%rbp), %eax
	imull	-12(%rbp), %eax
	movl	%eax, -304(%rbp)
# t59 = t61 + t60
	movl	-316(%rbp), %eax
	movl	-312(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -308(%rbp)
# t59 = t59 * 4
	movl	-308(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -308(%rbp)
# arr2[t59] = t57
	movl	-308(%rbp), %edx
	movl	-300(%rbp), %eax
cltq
	movl	%eax, -56(%rbp,%rdx,1)
# t62 = 0
	movl	$0, -320(%rbp)
# i = t62
	movl	-320(%rbp), %eax
	movl	%eax, -76(%rbp)
# t63 = 2
.L2:
	movl	$2, -324(%rbp)
# IF i < t63 GOTO .L0
	movl	-76(%rbp), %eax
	cmpl	-324(%rbp), %eax
	jge	.L12
	jmp	.L0
.L12:
# t64 = 0
	movb	$0, -324(%rbp)
# GOTO .L1
	jmp	.L1
# t64 = 1
	movb	$1, -324(%rbp)
# GOTO .L1
	jmp	.L1
# t65 = 1
.L11:
	movl	$1, -328(%rbp)
# t66 = i + t65
	movl	-76(%rbp), %eax
	movl	-328(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -332(%rbp)
# i = t66
	movl	-332(%rbp), %eax
	movl	%eax, -76(%rbp)
# GOTO .L2
	jmp	.L2
# t67 = 0
.L0:
	movl	$0, -336(%rbp)
# j = t67
	movl	-336(%rbp), %eax
	movl	%eax, -88(%rbp)
# t68 = 2
.L5:
	movl	$2, -340(%rbp)
# IF j < t68 GOTO .L3
	movl	-88(%rbp), %eax
	cmpl	-340(%rbp), %eax
	jge	.L13
	jmp	.L3
.L13:
# t69 = 0
	movb	$0, -340(%rbp)
# GOTO .L4
	jmp	.L4
# t69 = 1
	movb	$1, -340(%rbp)
# GOTO .L4
	jmp	.L4
# t70 = 1
.L10:
	movl	$1, -344(%rbp)
# t71 = j + t70
	movl	-88(%rbp), %eax
	movl	-344(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -348(%rbp)
# j = t71
	movl	-348(%rbp), %eax
	movl	%eax, -88(%rbp)
# GOTO .L5
	jmp	.L5
# t72 = 0
.L3:
	movl	$0, -352(%rbp)
# sum = t72
	movl	-352(%rbp), %eax
	movl	%eax, -80(%rbp)
# t73 = 0
	movl	$0, -356(%rbp)
# k = t73
	movl	-356(%rbp), %eax
	movl	%eax, -92(%rbp)
# t74 = 2
.L8:
	movl	$2, -360(%rbp)
# IF k < t74 GOTO .L6
	movl	-92(%rbp), %eax
	cmpl	-360(%rbp), %eax
	jge	.L14
	jmp	.L6
.L14:
# t75 = 0
	movb	$0, -360(%rbp)
# GOTO .L7
	jmp	.L7
# t75 = 1
	movb	$1, -360(%rbp)
# GOTO .L7
	jmp	.L7
# t76 = 1
.L9:
	movl	$1, -364(%rbp)
# t77 = k + t76
	movl	-92(%rbp), %eax
	movl	-364(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -368(%rbp)
# k = t77
	movl	-368(%rbp), %eax
	movl	%eax, -92(%rbp)
# GOTO .L8
	jmp	.L8
# t78 = t1
.L6:
	movl	-8(%rbp), %eax
	movl	%eax, -372(%rbp)
# t80 = k
	movl	-92(%rbp), %eax
	movl	%eax, -380(%rbp)
# t81 = i * t78
	movl	-76(%rbp), %eax
	imull	-372(%rbp), %eax
	movl	%eax, -384(%rbp)
# t78 = t78 * t0
	movl	-372(%rbp), %eax
	imull	-4(%rbp), %eax
	movl	%eax, -372(%rbp)
# t79 = t81 + t80
	movl	-384(%rbp), %eax
	movl	-380(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -376(%rbp)
# t79 = t79 * 4
	movl	-376(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -376(%rbp)
# t82 = arr1[t79]
	movl	-376(%rbp), %edx
cltq
	movl	-40(%rbp,%rdx,1), %eax
	movl	%eax, -388(%rbp)
# t83 = t3
	movl	-16(%rbp), %eax
	movl	%eax, -392(%rbp)
# t85 = j
	movl	-88(%rbp), %eax
	movl	%eax, -400(%rbp)
# t86 = k * t83
	movl	-92(%rbp), %eax
	imull	-392(%rbp), %eax
	movl	%eax, -404(%rbp)
# t83 = t83 * t2
	movl	-392(%rbp), %eax
	imull	-12(%rbp), %eax
	movl	%eax, -392(%rbp)
# t84 = t86 + t85
	movl	-404(%rbp), %eax
	movl	-400(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -396(%rbp)
# t84 = t84 * 4
	movl	-396(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -396(%rbp)
# t87 = arr2[t84]
	movl	-396(%rbp), %edx
cltq
	movl	-56(%rbp,%rdx,1), %eax
	movl	%eax, -408(%rbp)
# t88 = t82 * t87
	movl	-388(%rbp), %eax
	imull	-408(%rbp), %eax
	movl	%eax, -412(%rbp)
# t89 = sum + t88
	movl	-80(%rbp), %eax
	movl	-412(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -416(%rbp)
# sum = t89
	movl	-416(%rbp), %eax
	movl	%eax, -80(%rbp)
# GOTO .L9
	jmp	.L9
# PARAM sum
.L7:
# t90 = CALL printi 1
	movq	-80(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printi
	movq	%rax, -420(%rbp)
	addq	$4, %rsp
# GOTO .L10
	jmp	.L10
# GOTO .L11
.L4:
	jmp	.L11
# t91 = 1
.L1:
	movl	$1, -424(%rbp)
# n = t91
	movl	-424(%rbp), %eax
	movl	%eax, -84(%rbp)
# t92 = 0
	movl	$0, -428(%rbp)
# RETURN t92
	movq	-428(%rbp), %rax
	leave
	ret
# function main ends
	leave
	ret
	.size	main, .-main
