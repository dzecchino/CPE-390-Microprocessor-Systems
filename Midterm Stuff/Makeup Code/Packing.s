  .global _Z4packii

_Z4packii:
    ldr   r1, [r1]
    mov   r3, #0
.L1:
    ldr   r0, [r0]
    add   r3, r3, r0
    lsl   r3, #2
    add   r0, #4
    subs  r1, #1
    bne   .L1
    lsl   r3, #2
    mov   r3, r0
    bx    lr
