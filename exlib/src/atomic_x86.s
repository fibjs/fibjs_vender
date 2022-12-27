
// void __atomic_load(size_t size, const void* ptr, void* ret, int memorder);

.globl _atomic_load
_atomic_load:

.globl __atomic_load
__atomic_load:
	pushl	%edi
	pushl	%esi

	movl    16(%esp), %esi
	movl    20(%esp), %edi

	movl	12(%esp), %ecx

l8:
	cmpl	$8, %ecx
	jne		l1

	movq	(%esi), %xmm0
	movq	%xmm0, (%edi)

	jmp		ln

l1:
	cmpl	$1, %ecx
	jne		l2

	movb	(%esi), %al
	movb	%al, (%edi)

	jmp		ln

l2:
	cmpl	$2, %ecx
	jne		l4

	movzwl	(%esi), %eax
	movw	%ax, (%edi)

	jmp		ln

l4:
	cmpl	$4, %ecx
	jne		l8

	movl	(%esi), %eax
	movl	%eax, (%edi)

	jmp		ln

ln:
	popl	%esi
	popl	%edi
	retl

// void __atomic_store(size_t size, void* ptr, void* val, int memmodel);

.globl _atomic_store
_atomic_store:

.globl __atomic_store
__atomic_store:
	pushl	%edi
	pushl	%esi

	movl    16(%esp), %edi
	movl    20(%esp), %esi

	movl	12(%esp), %ecx

	cmpl	$8, %ecx
	jne		l1

	movq	(%esi), %xmm0
	movq	%xmm0, (%edi)

	movl	(%esi), %ebx
	movl	4(%esi), %ecx
	movl	(%edi), %eax
	movl	4(%edi), %edx
sl:
	lock
	cmpxchg8b	(%edi)
	jne	sl

	popl	%esi
	popl	%edi
	retl

// bool __atomic_compare_exchange (int size, type *ptr, type *expected, type *desired,
//              bool weak, int success_memorder, int failure_memorder);

.globl __atomic_compare_exchange
__atomic_compare_exchange:
	pushl	%ebx
	pushl	%edi
	pushl	%esi

	movl	20(%esp), %esi

	movl	28(%esp), %edi
	movl	(%edi), %ebx
	movl	4(%edi), %ecx

	movl	24(%esp), %edi
	movl	(%edi), %eax
	movl	4(%edi), %edx

	lock
	cmpxchg8b	(%esi)

	xorl	4(%edi), %edx
	xorl	(%edi), %eax
	xorl	%ecx, %ecx
	orl		%edx, %eax
	sete	%cl
	movl	%ecx, %eax

	popl	%esi
	popl	%edi
	popl	%ebx
	retl


// int64_t __atomic_load_8(const volatile int64_t* ptr, int memorder);

.globl __atomic_load_8
__atomic_load_8:
	subl	$8, %esp

	movl	12(%esp), %ecx
	movq	(%ecx), %xmm0
	movq	%xmm0, (%esp)

	popl	%eax
	popl	%edx

	retl


// int __atomic_compare_exchange_8(volatile int64_t* ptr, volatile int64_t* old_val, 
//              int64_t newval, int smodel, int fmodel);

.globl __atomic_compare_exchange_8
__atomic_compare_exchange_8:
	pushl	%ebx
	pushl	%edi
	pushl	%esi

	movl	16(%esp), %esi

	movl	20(%esp), %edi
	movl	(%edi), %eax
	movl	4(%edi), %edx

	movl	24(%esp), %ebx
	movl	28(%esp), %ecx

	lock
	cmpxchg8b	(%esi)

	xorl	4(%edi), %edx
	xorl	(%edi), %eax
	xorl	%ecx, %ecx
	orl		%edx, %eax
	sete	%cl
	movl	%ecx, %eax

	popl	%esi
	popl	%edi
	popl	%ebx
	retl
