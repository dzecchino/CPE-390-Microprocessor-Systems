  .global _Z9sumprodsqPiS1i

_Z9sumprodsqPiS1i:
          @assuming r0 and r1 are for the arrays and r2 is the length
          @r3 is the output

          push  {r4, r5, r6}
          mov   r3, #0
.L1:
          mov   r6, #0
          ldr   r4, [r0]
          ldr   r5, [r1]
          mul   r4, r4, r4
          mul   r5, r5, r5
          mul   r6, r4, r5
          add   r3, r6, r3
          add   r0, #4
          add   r1, #4
          subs  r3, #1
          bne   .L1
          pop   {r4, r5, r6}
          bx    lr
