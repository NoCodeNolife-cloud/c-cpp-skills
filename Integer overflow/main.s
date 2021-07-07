	.file	"main.cpp"
	.text
	.def	_ZL9vsnprintfPcyPKcS_;	.scl	3;	.type	32;	.endef
	.seh_proc	_ZL9vsnprintfPcyPKcS_
_ZL9vsnprintfPcyPKcS_:
.LFB508:
	subq	$40, %rsp
	.seh_stackalloc	40
	.seh_endprologue
	call	__mingw_vsnprintf
	addq	$40, %rsp
	ret
	.seh_endproc
	.def	_Z41__static_initialization_and_destruction_0ii;	.scl	3;	.type	32;	.endef
	.seh_proc	_Z41__static_initialization_and_destruction_0ii
_Z41__static_initialization_and_destruction_0ii:
.LFB3470:
	subq	$40, %rsp
	.seh_stackalloc	40
	.seh_endprologue
	cmpl	$1, %ecx
	je	.L4
.L2:
	addq	$40, %rsp
	ret
.L4:
	cmpl	$65535, %edx
	jne	.L2
	leaq	_ZStL8__ioinit(%rip), %rcx
	call	_ZNSt8ios_base4InitC1Ev
	leaq	__tcf_0(%rip), %rcx
	call	atexit
	jmp	.L2
	.seh_endproc
	.def	__tcf_0;	.scl	3;	.type	32;	.endef
	.seh_proc	__tcf_0
__tcf_0:
.LFB3471:
	subq	$40, %rsp
	.seh_stackalloc	40
	.seh_endprologue
	leaq	_ZStL8__ioinit(%rip), %rcx
	call	_ZNSt8ios_base4InitD1Ev
	nop
	addq	$40, %rsp
	ret
	.seh_endproc
	.section .rdata,"dr"
	.align 8
.LC0:
	.ascii "basic_string::_M_construct null not valid\0"
	.section	.text$_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPcEEvT_S7_St20forward_iterator_tag,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPcEEvT_S7_St20forward_iterator_tag
	.def	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPcEEvT_S7_St20forward_iterator_tag;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPcEEvT_S7_St20forward_iterator_tag
_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPcEEvT_S7_St20forward_iterator_tag:
.LFB3406:
	pushq	%rdi
	.seh_pushreg	%rdi
	pushq	%rsi
	.seh_pushreg	%rsi
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	movq	%rcx, %rsi
	movq	%rdx, %rdi
	testq	%rdx, %rdx
	je	.L11
.L7:
	movq	%r8, %rbx
	subq	%rdi, %rbx
	movq	%rbx, 40(%rsp)
	cmpq	$15, %rbx
	ja	.L12
.L8:
	movq	(%rsi), %rcx
	cmpq	$1, %rbx
	je	.L13
	testq	%rbx, %rbx
	jne	.L14
.L10:
	movq	40(%rsp), %rax
	movq	%rax, 8(%rsi)
	addq	(%rsi), %rax
	movb	$0, (%rax)
	addq	$48, %rsp
	popq	%rbx
	popq	%rsi
	popq	%rdi
	ret
.L11:
	cmpq	%r8, %rdx
	je	.L7
	leaq	.LC0(%rip), %rcx
	call	_ZSt19__throw_logic_errorPKc
.L12:
	leaq	40(%rsp), %rdx
	movl	$0, %r8d
	movq	%rsi, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERyy
	movq	%rax, (%rsi)
	movq	40(%rsp), %rax
	movq	%rax, 16(%rsi)
	jmp	.L8
.L13:
	movzbl	(%rdi), %eax
	movb	%al, (%rcx)
	jmp	.L10
.L14:
	movq	%rbx, %r8
	movq	%rdi, %rdx
	call	memcpy
	jmp	.L10
	.seh_endproc
	.section	.text$_ZN9__gnu_cxx12__to_xstringINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEcEET_PFiPT0_yPKS8_PcEySB_z,"x"
	.linkonce discard
	.globl	_ZN9__gnu_cxx12__to_xstringINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEcEET_PFiPT0_yPKS8_PcEySB_z
	.def	_ZN9__gnu_cxx12__to_xstringINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEcEET_PFiPT0_yPKS8_PcEySB_z;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN9__gnu_cxx12__to_xstringINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEcEET_PFiPT0_yPKS8_PcEySB_z
_ZN9__gnu_cxx12__to_xstringINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEcEET_PFiPT0_yPKS8_PcEySB_z:
.LFB3032:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rsi
	.seh_pushreg	%rsi
	pushq	%rbx
	.seh_pushreg	%rbx
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	movq	%rcx, %rbx
	movq	%rdx, %r10
	movq	%r8, %rdx
	movq	%r9, %r8
	leaq	30(%rdx), %rax
	andq	$-16, %rax
	call	___chkstk_ms
	subq	%rax, %rsp
	leaq	32(%rsp), %rsi
	leaq	64(%rbp), %r9
	movq	%r9, -8(%rbp)
	movq	%rsi, %rcx
	call	*%r10
	cltq
	leaq	16(%rbx), %rdx
	movq	%rdx, (%rbx)
	movl	$0, %r9d
	leaq	(%rsi,%rax), %r8
	movq	%rsi, %rdx
	movq	%rbx, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPcEEvT_S7_St20forward_iterator_tag
	movq	%rbx, %rax
	movq	%rbp, %rsp
	popq	%rbx
	popq	%rsi
	popq	%rbp
	ret
	.seh_endproc
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
.LC1:
	.ascii "0^2\0"
.LC2:
	.ascii "=\0"
.LC3:
	.ascii "%d\0"
.LC4:
	.ascii "+\0"
.LC5:
	.ascii "basic_string::append\0"
.LC6:
	.ascii "^2\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
.LFB2957:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rdi
	.seh_pushreg	%rdi
	pushq	%rsi
	.seh_pushreg	%rsi
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$184, %rsp
	.seh_stackalloc	184
	.seh_endprologue
	call	__main
	leaq	144(%rsp), %rcx
	leaq	16(%rcx), %rax
	movq	%rax, 144(%rsp)
	movq	$0, 152(%rsp)
	movb	$0, 160(%rsp)
	leaq	.LC1(%rip), %rdx
.LEHB0:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6assignEPKc
	movq	152(%rsp), %r8
	movq	144(%rsp), %rdx
	movq	.refptr._ZSt4cout(%rip), %rcx
	call	_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_x
	movq	%rax, %rbx
	movl	$1, %r8d
	leaq	.LC2(%rip), %rdx
	movq	%rax, %rcx
	call	_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_x
	movl	$1, %edx
	movq	%rbx, %rcx
	call	_ZNSolsEi
	movq	%rax, %rcx
	call	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
.LEHE0:
	movl	$1, %esi
	movl	$1, %ebx
	jmp	.L30
.L52:
	movq	56(%rsp), %r8
	testq	%r8, %r8
	je	.L18
	movl	$0, %r8d
.L18:
	leaq	48(%rsp), %rcx
	movq	$1, 32(%rsp)
	leaq	.LC4(%rip), %r9
	movl	$0, %edx
.LEHB1:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_replaceEyyPKcy
.LEHE1:
	leaq	96(%rsp), %rdx
	movq	%rdx, 80(%rsp)
	movq	(%rax), %rcx
	leaq	16(%rax), %rdx
	cmpq	%rdx, %rcx
	je	.L45
	movq	%rcx, 80(%rsp)
	movq	16(%rax), %rcx
	movq	%rcx, 96(%rsp)
.L20:
	movq	8(%rax), %rcx
	movq	%rcx, 88(%rsp)
	movq	%rdx, (%rax)
	movq	$0, 8(%rax)
	movb	$0, 16(%rax)
	movabsq	$9223372036854775807, %rax
	subq	88(%rsp), %rax
	cmpq	$1, %rax
	jbe	.L46
	leaq	80(%rsp), %rcx
	movl	$2, %r8d
	leaq	.LC6(%rip), %rdx
.LEHB2:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_appendEPKcy
	jmp	.L47
.L45:
	movq	16(%rax), %r9
	movq	24(%rax), %r10
	movq	%r9, 96(%rsp)
	movq	%r10, 104(%rsp)
	jmp	.L20
.L46:
	leaq	.LC5(%rip), %rcx
	call	_ZSt20__throw_length_errorPKc
.LEHE2:
.L42:
	movq	%rax, %rbx
	jmp	.L34
.L47:
	leaq	128(%rsp), %rdx
	movq	%rdx, 112(%rsp)
	movq	(%rax), %rcx
	leaq	16(%rax), %rdx
	cmpq	%rdx, %rcx
	je	.L48
	movq	%rcx, 112(%rsp)
	movq	16(%rax), %rcx
	movq	%rcx, 128(%rsp)
.L23:
	movq	8(%rax), %rcx
	movq	%rcx, 120(%rsp)
	movq	%rdx, (%rax)
	movq	$0, 8(%rax)
	movb	$0, 16(%rax)
	leaq	144(%rsp), %rcx
	movq	120(%rsp), %r8
	movq	112(%rsp), %rdx
.LEHB3:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_appendEPKcy
.LEHE3:
	jmp	.L49
.L48:
	movq	16(%rax), %r9
	movq	24(%rax), %r10
	movq	%r9, 128(%rsp)
	movq	%r10, 136(%rsp)
	jmp	.L23
.L49:
	movq	112(%rsp), %rcx
	leaq	128(%rsp), %rax
	cmpq	%rax, %rcx
	je	.L24
	call	_ZdlPv
.L24:
	movq	80(%rsp), %rcx
	leaq	96(%rsp), %rax
	cmpq	%rax, %rcx
	je	.L25
	call	_ZdlPv
.L25:
	movq	48(%rsp), %rcx
	leaq	64(%rsp), %rax
	cmpq	%rax, %rcx
	je	.L26
	call	_ZdlPv
.L26:
	pxor	%xmm1, %xmm1
	cvtsi2sd	%esi, %xmm1
	movsd	.LC7(%rip), %xmm0
	call	pow
	pxor	%xmm1, %xmm1
	cvtsi2sd	%ebx, %xmm1
	addsd	%xmm1, %xmm0
	cvttsd2si	%xmm0, %ebx
	movq	152(%rsp), %r8
	movq	144(%rsp), %rdx
	movq	.refptr._ZSt4cout(%rip), %rcx
.LEHB4:
	call	_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_x
	movq	%rax, %rdi
	movl	$1, %r8d
	leaq	.LC2(%rip), %rdx
	movq	%rax, %rcx
	call	_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_x
	movl	%ebx, %edx
	movq	%rdi, %rcx
	call	_ZNSolsEi
	movq	%rax, %rbp
	movq	(%rax), %rax
	movq	%rbp, %rdi
	addq	-24(%rax), %rdi
	movq	240(%rdi), %rdi
	testq	%rdi, %rdi
	je	.L50
	cmpb	$0, 56(%rdi)
	je	.L28
	movzbl	67(%rdi), %eax
.L29:
	movsbl	%al, %edx
	movq	%rbp, %rcx
	call	_ZNSo3putEc
	jmp	.L51
.L50:
	call	_ZSt16__throw_bad_castv
.L40:
	movq	%rax, %rbx
	jmp	.L38
.L28:
	movq	%rdi, %rcx
	call	_ZNKSt5ctypeIcE13_M_widen_initEv
	movq	(%rdi), %rax
	movl	$10, %edx
	movq	%rdi, %rcx
	call	*48(%rax)
	jmp	.L29
.L51:
	movq	%rax, %rcx
	call	_ZNSo5flushEv
	addl	$1, %esi
.L30:
	cmpl	$30, %esi
	jg	.L17
	leaq	48(%rsp), %rcx
	movl	%esi, 32(%rsp)
	leaq	.LC3(%rip), %r9
	movl	$16, %r8d
	leaq	_ZL9vsnprintfPcyPKcS_(%rip), %rdx
	call	_ZN9__gnu_cxx12__to_xstringINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEcEET_PFiPT0_yPKS8_PcEySB_z
	jmp	.L52
.L17:
	movl	$2147483647, %edx
	movq	.refptr._ZSt4cout(%rip), %rcx
	call	_ZNSolsEi
	movq	%rax, %rcx
	call	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
.LEHE4:
	movq	144(%rsp), %rcx
	leaq	160(%rsp), %rax
	cmpq	%rax, %rcx
	je	.L44
	call	_ZdlPv
.L44:
	movl	$0, %eax
	addq	$184, %rsp
	popq	%rbx
	popq	%rsi
	popq	%rdi
	popq	%rbp
	ret
.L43:
	movq	%rax, %rbx
	movq	112(%rsp), %rcx
	leaq	128(%rsp), %rax
	cmpq	%rax, %rcx
	je	.L34
	call	_ZdlPv
.L34:
	movq	80(%rsp), %rcx
	leaq	96(%rsp), %rax
	cmpq	%rax, %rcx
	je	.L36
	call	_ZdlPv
.L36:
	movq	48(%rsp), %rcx
	leaq	64(%rsp), %rax
	cmpq	%rax, %rcx
	je	.L38
	call	_ZdlPv
.L38:
	movq	144(%rsp), %rcx
	leaq	160(%rsp), %rax
	cmpq	%rax, %rcx
	je	.L39
	call	_ZdlPv
.L39:
	movq	%rbx, %rcx
.LEHB5:
	call	_Unwind_Resume
.LEHE5:
.L41:
	movq	%rax, %rbx
	jmp	.L36
	.def	__gxx_personality_seh0;	.scl	2;	.type	32;	.endef
	.seh_handler	__gxx_personality_seh0, @unwind, @except
	.seh_handlerdata
.LLSDA2957:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE2957-.LLSDACSB2957
.LLSDACSB2957:
	.uleb128 .LEHB0-.LFB2957
	.uleb128 .LEHE0-.LEHB0
	.uleb128 .L40-.LFB2957
	.uleb128 0
	.uleb128 .LEHB1-.LFB2957
	.uleb128 .LEHE1-.LEHB1
	.uleb128 .L41-.LFB2957
	.uleb128 0
	.uleb128 .LEHB2-.LFB2957
	.uleb128 .LEHE2-.LEHB2
	.uleb128 .L42-.LFB2957
	.uleb128 0
	.uleb128 .LEHB3-.LFB2957
	.uleb128 .LEHE3-.LEHB3
	.uleb128 .L43-.LFB2957
	.uleb128 0
	.uleb128 .LEHB4-.LFB2957
	.uleb128 .LEHE4-.LEHB4
	.uleb128 .L40-.LFB2957
	.uleb128 0
	.uleb128 .LEHB5-.LFB2957
	.uleb128 .LEHE5-.LEHB5
	.uleb128 0
	.uleb128 0
.LLSDACSE2957:
	.text
	.seh_endproc
	.def	_GLOBAL__sub_I_main;	.scl	3;	.type	32;	.endef
	.seh_proc	_GLOBAL__sub_I_main
_GLOBAL__sub_I_main:
.LFB3472:
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
.LC7:
	.long	0
	.long	1073741824
	.ident	"GCC: (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 7.3.0"
	.def	__mingw_vsnprintf;	.scl	2;	.type	32;	.endef
	.def	_ZNSt8ios_base4InitC1Ev;	.scl	2;	.type	32;	.endef
	.def	atexit;	.scl	2;	.type	32;	.endef
	.def	_ZNSt8ios_base4InitD1Ev;	.scl	2;	.type	32;	.endef
	.def	_ZSt19__throw_logic_errorPKc;	.scl	2;	.type	32;	.endef
	.def	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERyy;	.scl	2;	.type	32;	.endef
	.def	memcpy;	.scl	2;	.type	32;	.endef
	.def	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6assignEPKc;	.scl	2;	.type	32;	.endef
	.def	_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_x;	.scl	2;	.type	32;	.endef
	.def	_ZNSolsEi;	.scl	2;	.type	32;	.endef
	.def	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;	.scl	2;	.type	32;	.endef
	.def	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_replaceEyyPKcy;	.scl	2;	.type	32;	.endef
	.def	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_appendEPKcy;	.scl	2;	.type	32;	.endef
	.def	_ZSt20__throw_length_errorPKc;	.scl	2;	.type	32;	.endef
	.def	_ZdlPv;	.scl	2;	.type	32;	.endef
	.def	pow;	.scl	2;	.type	32;	.endef
	.def	_ZNSo3putEc;	.scl	2;	.type	32;	.endef
	.def	_ZSt16__throw_bad_castv;	.scl	2;	.type	32;	.endef
	.def	_ZNKSt5ctypeIcE13_M_widen_initEv;	.scl	2;	.type	32;	.endef
	.def	_ZNSo5flushEv;	.scl	2;	.type	32;	.endef
	.def	_Unwind_Resume;	.scl	2;	.type	32;	.endef
	.section	.rdata$.refptr._ZSt4cout, "dr"
	.globl	.refptr._ZSt4cout
	.linkonce	discard
.refptr._ZSt4cout:
	.quad	_ZSt4cout
