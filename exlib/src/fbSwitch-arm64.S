.balign 8
.globl fb_switch, _fb_switch
fb_switch:
_fb_switch:

    stp x0, x1, [x0]
    stp x2, x3, [x0,#16]
    stp x4, x5, [x0,#32]
    stp x6, x7, [x0,#48]
    stp x8, x9, [x0,#64]
    stp x10, x11, [x0,#80]
    stp x12, x13, [x0,#96]
    stp x14, x15, [x0,#112]
    stp x16, x17, [x0,#128]
    stp x18, x19, [x0,#144]
    stp x20, x21, [x0,#160]
    stp x22, x23, [x0,#176]
    stp x24, x25, [x0,#192]
    stp x26, x27, [x0,#208]
    stp x28, x29, [x0,#224]

    mov x8, sp
    stp x30, x8, [x0,#240]

    stp d0, d1, [x0,#256]
    stp d2, d3, [x0,#272]
    stp d4, d5, [x0,#288]
    stp d6, d7, [x0,#304]
    stp d8, d9, [x0,#320]
    stp d10, d11, [x0,#336]
    stp d12, d13, [x0,#352]
    stp d14, d15, [x0,#368]
    stp d16, d17, [x0,#384]
    stp d18, d19, [x0,#400]
    stp d20, d21, [x0,#416]
    stp d22, d23, [x0,#432]
    stp d24, d25, [x0,#448]
    stp d26, d27, [x0,#464]
    stp d28, d29, [x0,#480]
    stp d30, d31, [x0,#496]

#ifdef __APPLE__
    mov x8, #68719411200
    movk x8, #49420
    ldrb w9, [x8]

    cmp w9, #1
    b.ne l1

    mrs x8, s3_4_c15_c2_7
    str x8, [x0,#512]

    mov x0, x1

    ldr x8, [x0,#512]
    msr s3_4_c15_c2_7, x8
    isb

    b l3

l1:
    cmp w9, #0
    b.eq l2
    cmp w9, #3
    b.gt l2

    mrs x8, s3_6_c15_c1_5
    str x8, [x0,#512]

    mov x0, x1

    ldr x8, [x0,#512]
    msr s3_6_c15_c1_5, x8
    isb

    b l3

l2:
#endif
    mov x0, x1

l3:

    ldp x2, x3, [x0,#16]
    ldp x4, x5, [x0,#32]
    ldp x6, x7, [x0,#48]
    ldp x8, x9, [x0,#64]
    ldp x10, x11, [x0,#80]
    ldp x12, x13, [x0,#96]
    ldp x14, x15, [x0,#112]
    ldp x16, x17, [x0,#128]
    ldp x18, x19, [x0,#144]
    ldp x20, x21, [x0,#160]
    ldp x22, x23, [x0,#176]
    ldp x24, x25, [x0,#192]
    ldp x26, x27, [x0,#208]
    ldp x28, x29, [x0,#224]

    ldp x30, x1, [x0,#240]
    mov sp, x1

    ldp d0, d1, [x0,#256]
    ldp d2, d3, [x0,#272]
    ldp d4, d5, [x0,#288]
    ldp d6, d7, [x0,#304]
    ldp d8, d9, [x0,#320]
    ldp d10, d11, [x0,#336]
    ldp d12, d13, [x0,#352]
    ldp d14, d15, [x0,#368]
    ldp d16, d17, [x0,#384]
    ldp d18, d19, [x0,#400]
    ldp d20, d21, [x0,#416]
    ldp d22, d23, [x0,#432]
    ldp d24, d25, [x0,#448]
    ldp d26, d27, [x0,#464]
    ldp d28, d29, [x0,#480]
    ldp d30, d31, [x0,#496]

    ldp x0, x1, [x0]

    ret
