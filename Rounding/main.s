	.file	"main.cpp"
	.text
	.def	_Z41__static_initialization_and_destruction_0ii;	.scl	3;	.type	32;	.endef
	.seh_proc	_Z41__static_initialization_and_destruction_0ii
_Z41__static_initialization_and_destruction_0ii:
.LFB2905:
	subq	$40, %rsp
	.seh_stackalloc	40
	.seh_endprologue
	cmpl	$1, %ecx
	je	.L3
.L1:
	addq	$40, %rsp
	ret
.L3:
	cmpl	$65535, %edx
	jne	.L1
	leaq	_ZStL8__ioinit(%rip), %rcx
	call	_ZNSt8ios_base4InitC1Ev
	leaq	__tcf_0(%rip), %rcx
	call	atexit
	jmp	.L1
	.seh_endproc
	.def	__tcf_0;	.scl	3;	.type	32;	.endef
	.seh_proc	__tcf_0
__tcf_0:
.LFB2906:
	subq	$40, %rsp
	.seh_stackalloc	40
	.seh_endprologue
	leaq	_ZStL8__ioinit(%rip), %rcx
	call	_ZNSt8ios_base4InitD1Ev
	nop
	addq	$40, %rsp
	ret
	.seh_endproc
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
.LC2:
	.ascii "floor:\0"
.LC6:
	.ascii " ceil:\0"
.LC7:
	.ascii " round:\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
.LFB2400:
	pushq	%rsi
	.seh_pushreg	%rsi
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$56, %rsp
	.seh_stackalloc	56
	movaps	%xmm6, 32(%rsp)
	.seh_savexmm	%xmm6, 32
	.seh_endprologue
	call	__main
	movsd	.LC0(%rip), %xmm6
	jmp	.L13
.L9:
	movq	%rbx, %rcx
	call	_ZNSo9_M_insertIdEERSoT_
	movq	%rax, %rbx
	movl	$7, %r8d
	leaq	.LC7(%rip), %rdx
	movq	%rax, %rcx
	call	_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_x
	movapd	%xmm6, %xmm0
	call	round
	movapd	%xmm0, %xmm1
	movq	%rbx, %rcx
	call	_ZNSo9_M_insertIdEERSoT_
	movq	%rax, %rsi
	movq	(%rax), %rax
	movq	%rsi, %rbx
	addq	-24(%rax), %rbx
	movq	240(%rbx), %rbx
	testq	%rbx, %rbx
	je	.L16
	cmpb	$0, 56(%rbx)
	je	.L11
	movzbl	67(%rbx), %eax
.L12:
	movsbl	%al, %edx
	movq	%rsi, %rcx
	call	_ZNSo3putEc
	movq	%rax, %rcx
	call	_ZNSo5flushEv
	addsd	.LC8(%rip), %xmm6
.L13:
	movsd	.LC1(%rip), %xmm0
	ucomisd	%xmm6, %xmm0
	jbe	.L15
	movq	.refptr._ZSt4cout(%rip), %rcx
	movq	(%rcx), %rax
	movq	%rcx, %rdx
	addq	-24(%rax), %rdx
	movq	$10, 16(%rdx)
	movq	%rcx, %rdx
	addq	-24(%rax), %rdx
	movl	24(%rdx), %eax
	andb	$79, %al
	orl	$32, %eax
	movl	%eax, 24(%rdx)
	movapd	%xmm6, %xmm1
	call	_ZNSo9_M_insertIdEERSoT_
	movq	%rax, %rbx
	movl	$6, %r8d
	leaq	.LC2(%rip), %rdx
	movq	%rax, %rcx
	call	_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_x
	movapd	%xmm6, %xmm1
	movsd	.LC4(%rip), %xmm2
	movapd	%xmm6, %xmm0
	andpd	%xmm2, %xmm0
	movsd	.LC3(%rip), %xmm3
	ucomisd	%xmm0, %xmm3
	jbe	.L8
	cvttsd2siq	%xmm6, %rax
	pxor	%xmm0, %xmm0
	cvtsi2sdq	%rax, %xmm0
	movapd	%xmm0, %xmm1
	cmpnlesd	%xmm6, %xmm1
	movsd	.LC5(%rip), %xmm3
	andpd	%xmm3, %xmm1
	subsd	%xmm1, %xmm0
	movapd	%xmm0, %xmm1
	andnpd	%xmm6, %xmm2
	orpd	%xmm2, %xmm1
.L8:
	movq	%rbx, %rcx
	call	_ZNSo9_M_insertIdEERSoT_
	movq	%rax, %rbx
	movl	$6, %r8d
	leaq	.LC6(%rip), %rdx
	movq	%rax, %rcx
	call	_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_x
	movapd	%xmm6, %xmm1
	movsd	.LC4(%rip), %xmm2
	movapd	%xmm6, %xmm0
	andpd	%xmm2, %xmm0
	movsd	.LC3(%rip), %xmm3
	ucomisd	%xmm0, %xmm3
	jbe	.L9
	cvttsd2siq	%xmm6, %rax
	pxor	%xmm0, %xmm0
	cvtsi2sdq	%rax, %xmm0
	cmpnlesd	%xmm0, %xmm1
	movsd	.LC5(%rip), %xmm3
	andpd	%xmm3, %xmm1
	addsd	%xmm0, %xmm1
	andnpd	%xmm6, %xmm2
	orpd	%xmm2, %xmm1
	jmp	.L9
.L16:
	call	_ZSt16__throw_bad_castv
.L11:
	movq	%rbx, %rcx
	call	_ZNKSt5ctypeIcE13_M_widen_initEv
	movq	(%rbx), %rax
	movl	$10, %edx
	movq	%rbx, %rcx
	call	*48(%rax)
	jmp	.L12
.L15:
	movl	$0, %eax
	movaps	32(%rsp), %xmm6
	addq	$56, %rsp
	popq	%rbx
	popq	%rsi
	ret
	.seh_endproc
	.def	_GLOBAL__sub_I_main;	.scl	3;	.type	32;	.endef
	.seh_proc	_GLOBAL__sub_I_main
_GLOBAL__sub_I_main:
.LFB2907:
	subq	$40, %rsp
	.seh_stackalloc	40
	.seh_endprologue
	movl	$65535, %edx
	movl	$1, %ecx
	call	_Z41__static_initialization_and_destruction_0ii
	nop
	addq	$40, %rsp
	ret
	.seh_endproc
	.section	.ctors,"w"
	.align 8
	.quad	_GLOBAL__sub_I_main
.lcomm _ZStL8__ioinit,1,1
	.section .rdata,"dr"
	.align 8
.LC0:
	.long	0
	.long	1076232192
	.align 8
.LC1:
	.long	0
	.long	1076363264
	.align 8
.LC3:
	.long	0
	.long	1127219200
	.align 16
.LC4:
	.long	-1
	.long	2147483647
	.long	0
	.long	0
	.align 8
.LC5:
	.long	0
	.long	1072693248
	.align 8
.LC8:
	.long	1202590843
	.long	1065646817
	.ident	"GCC: (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 7.3.0"
	.def	_ZNSt8ios_base4InitC1Ev;	.scl	2;	.type	32;	.endef
	.def	atexit;	.scl	2;	.type	32;	.endef
	.def	_ZNSt8ios_base4InitD1Ev;	.scl	2;	.type	32;	.endef
	.def	_ZNSo9_M_insertIdEERSoT_;	.scl	2;	.type	32;	.endef
	.def	_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_x;	.scl	2;	.type	32;	.endef
	.def	round;	.scl	2;	.type	32;	.endef
	.def	_ZNSo3putEc;	.scl	2;	.type	32;	.endef
	.def	_ZNSo5flushEv;	.scl	2;	.type	32;	.endef
	.def	_ZSt16__throw_bad_castv;	.scl	2;	.type	32;	.endef
	.def	_ZNKSt5ctypeIcE13_M_widen_initEv;	.scl	2;	.type	32;	.endef
	.section	.rdata$.refptr._ZSt4cout, "dr"
	.globl	.refptr._ZSt4cout
	.linkonce	discard
.refptr._ZSt4cout:
	.quad	_ZSt4cout
