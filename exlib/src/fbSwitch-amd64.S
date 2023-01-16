.balign 8
.globl fb_switch, _fb_switch
fb_switch:
_fb_switch:

    movq    %rbp,(%rdi)

    movq    %rbx,0x08(%rdi)
    movq    %rcx,0x10(%rdi)
    movq    %rdx,0x18(%rdi)
    movq    %rsi,0x20(%rdi)
    movq    %rdi,0x28(%rdi)
    movq    %r8,0x30(%rdi)
    movq    %r9,0x38(%rdi)
    movq    %r10,0x40(%rdi)
    movq    %r11,0x48(%rdi)
    movq    %r12,0x50(%rdi)
    movq    %r13,0x58(%rdi)
    movq    %r14,0x60(%rdi)
    movq    %r15,0x68(%rdi)

    movq    %rsp,0x70(%rdi)

    movq    %rsi, %rdi

    movq    (%rdi), %rbp
    movq    0x08(%rdi), %rbx
    movq    0x10(%rdi), %rcx
    movq    0x18(%rdi), %rdx
    movq    0x20(%rdi), %rsi

    movq    0x30(%rdi), %r8
    movq    0x38(%rdi), %r9
    movq    0x40(%rdi), %r10
    movq    0x48(%rdi), %r11
    movq    0x50(%rdi), %r12
    movq    0x58(%rdi), %r13
    movq    0x60(%rdi), %r14
    movq    0x68(%rdi), %r15
    movq    0x70(%rdi), %rsp

    movq    0x28(%rdi), %rdi

    ret
