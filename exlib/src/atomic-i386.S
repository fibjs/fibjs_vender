
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

// void __atomic_store_8(volatile void *ptr, uint64_t val, int memorder);

.globl __atomic_store_8
__atomic_store_8:
	endbr32
	pushl	%ebx
	subl	$8, %esp
	movl	24(%esp), %ebx
	movl	20(%esp), %ecx
	movl	%ecx, (%esp)
	movl	%ebx, 4(%esp)
	fildq	(%esp)
	movl	16(%esp), %eax
	fistpq	(%eax)
	lock orl	$0, (%esp)
	addl	$8, %esp
	popl	%ebx
	ret


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

// uint64_t __atomic_fetch_or_8(volatile void* ptr, uint64_t val, int memorder)

.globl	__atomic_fetch_or_8
__atomic_fetch_or_8:
	pushl	%ebp
	pushl	%edi
	pushl	%esi
	pushl	%ebx
	subl	$12, %esp
	movl	36(%esp), %eax
	movl	40(%esp), %esi
	movl	%eax, (%esp)
	movl	32(%esp), %eax
	movl	4(%eax), %edx
	movl	(%eax), %eax
	movl	%esi, 4(%esp)
.f2:
	movl	(%esp), %ebx
	movl	4(%esp), %ecx
	movl	%eax, %edi
	movl	%edx, %ebp
	movl	32(%esp), %esi
	orl	%eax, %ebx
	orl	%edx, %ecx
	lock cmpxchg8b	(%esi)
	jne	.f2
	addl	$12, %esp
	movl	%edi, %eax
	movl	%ebp, %edx
	popl	%ebx
	popl	%esi
	popl	%edi
	popl	%ebp
	ret

// uint64_t __atomic_fetch_add_8(volatile void *ptr, uint64_t val, int memorder);

.globl	__atomic_fetch_add_8
__atomic_fetch_add_8:
	endbr32
	pushl	%ebp
	pushl	%edi
	pushl	%esi
	pushl	%ebx
	subl	$20, %esp
	movl	44(%esp), %eax
	movl	48(%esp), %edx
	movl	40(%esp), %ebp
	movl	%eax, 8(%esp)
	movl	%edx, 12(%esp)
	movl	0(%ebp), %eax
	movl	4(%ebp), %edx
.g2:
	movl	8(%esp), %ecx
	movl	12(%esp), %ebx
	movl	%eax, %esi
	movl	%edx, %edi
	addl	%eax, %ecx
	adcl	%edx, %ebx
	movl	%ecx, (%esp)
	movl	%ebx, 4(%esp)
	movl	(%esp), %ebx
	movl	4(%esp), %ecx
	lock cmpxchg8b	0(%ebp)
	jne	.g2
	addl	$20, %esp
	movl	%esi, %eax
	movl	%edi, %edx
	popl	%ebx
	popl	%esi
	popl	%edi
	popl	%ebp
	ret

// uint64_t __atomic_fetch_sub_8(volatile void *ptr, uint64_t val, int memorder);

.globl	__atomic_fetch_sub_8
__atomic_fetch_sub_8:
	endbr32
	pushl	%ebp
	pushl	%edi
	pushl	%esi
	pushl	%ebx
	subl	$20, %esp
	movl	44(%esp), %eax
	movl	48(%esp), %edx
	movl	40(%esp), %ebp
	movl	%eax, (%esp)
	movl	%edx, 4(%esp)
	movl	0(%ebp), %eax
	movl	4(%ebp), %edx
.h2:
	movl	%eax, %ecx
	movl	%edx, %ebx
	subl	(%esp), %ecx
	sbbl	4(%esp), %ebx
	movl	%ebx, 12(%esp)
	movl	%ecx, %ebx
	movl	%eax, %esi
	movl	%edx, %edi
	movl	%ecx, 8(%esp)
	movl	12(%esp), %ecx
	lock cmpxchg8b	0(%ebp)
	jne	.h2
	addl	$20, %esp
	movl	%esi, %eax
	movl	%edi, %edx
	popl	%ebx
	popl	%esi
	popl	%edi
	popl	%ebp
	ret

// uint64_t __atomic_fetch_and_8(volatile void *ptr, uint64_t val, int memorder);

.globl	__atomic_fetch_and_8
__atomic_fetch_and_8:
	endbr32
	pushl	%ebp
	pushl	%edi
	pushl	%esi
	pushl	%ebx
	subl	$12, %esp
	movl	36(%esp), %eax
	movl	40(%esp), %esi
	movl	%eax, (%esp)
	movl	32(%esp), %eax
	movl	4(%eax), %edx
	movl	(%eax), %eax
	movl	%esi, 4(%esp)
.i2:
	movl	(%esp), %ebx
	movl	4(%esp), %ecx
	movl	%eax, %edi
	movl	%edx, %ebp
	movl	32(%esp), %esi
	andl	%eax, %ebx
	andl	%edx, %ecx
	lock cmpxchg8b	(%esi)
	jne	.i2
	addl	$12, %esp
	movl	%edi, %eax
	movl	%ebp, %edx
	popl	%ebx
	popl	%esi
	popl	%edi
	popl	%ebp
	ret

.globl __atomic_is_lock_free
__atomic_is_lock_free:
	xorl	%eax, %eax
	ret
