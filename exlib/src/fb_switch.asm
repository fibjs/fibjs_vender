
PUBLIC win_switch
PUBLIC win_save

_TEXT   SEGMENT

win_switch:
	mov	[rcx], rbp
	mov	[rcx + 008h], rbx

    mov	[rcx + 018h], rdx
	mov	[rcx + 020h], rsi
	mov	[rcx + 028h], rdi
	mov	[rcx + 030h], r8
	mov	[rcx + 038h], r9
	mov	[rcx + 040h], r10
	mov	[rcx + 048h], r11
	mov	[rcx + 050h], r12
	mov	[rcx + 058h], r13
	mov	[rcx + 060h], r14
	mov	[rcx + 068h], r15

	mov	[rcx + 070h], rsp

    mov	rcx, rdx

	mov	rbp, [rcx]
	mov	rbx, [rcx + 008h]

	mov	rdx, [rcx + 018h]
	mov	rsi, [rcx + 020h]
	mov	rdi, [rcx + 028h]
	mov	r8, [rcx + 030h]
	mov	r9, [rcx + 038h]
	mov	r10, [rcx + 040h]
	mov	r11, [rcx + 048h]
	mov	r12, [rcx + 050h]
	mov	r13, [rcx + 058h]
	mov	r14, [rcx + 060h]
	mov	r15, [rcx + 068h]
	mov	rsp, [rcx + 070h]

	mov	rcx, [rcx + 010h]

	ret

win_save:
	mov	[rcx], rbp
	mov	[rcx + 008h], rbx

    mov	[rcx + 018h], rdx
	mov	[rcx + 020h], rsi
	mov	[rcx + 028h], rdi
	mov	[rcx + 030h], r8
	mov	[rcx + 038h], r9
	mov	[rcx + 040h], r10
	mov	[rcx + 048h], r11
	mov	[rcx + 050h], r12
	mov	[rcx + 058h], r13
	mov	[rcx + 060h], r14
	mov	[rcx + 068h], r15

	ret

_TEXT   ENDS

END
