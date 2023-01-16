.globl fb_switch, _fb_switch
fb_switch:
_fb_switch:

    movl    0x4(%esp), %eax
    movl    %ebp, (%eax)
    movl    %ebx, 0x04(%eax)
    movl    %ecx, 0x08(%eax)
    movl    %edx, 0x0c(%eax)
    movl    %esi, 0x10(%eax)
    movl    %edi, 0x14(%eax)

    movl    %esp, 0x18(%eax)

    movl    0x8(%esp), %eax
    movl    (%eax), %ebp
    movl    0x04(%eax), %ebx
    movl    0x08(%eax), %ecx
    movl    0x0c(%eax), %edx
    movl    0x10(%eax), %esi
    movl    0x14(%eax), %edi
    movl    0x18(%eax), %esp

    ret
