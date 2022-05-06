
// void __atomic_load(const volatile intptr_t* ptr, intptr_t* ret, memorder);

.globl __atomic_load
__atomic_load:
	pushl	%edi
	pushl	%esi

	movl    16(%esp), %esi
	movl    20(%esp), %edi

	movq	(%esi), %xmm0
	movq	%xmm0, (%edi)

	popl	%esi
	popl	%edi
	retl


// bool __atomic_compare_exchange (type *ptr, type *expected, type *desired,
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
