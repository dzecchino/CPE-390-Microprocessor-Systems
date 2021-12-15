@ Section: A
@ I pledge my honor that I have abided by the Stevens Honor System
@ Pledge value: 625 in decimal value

@ Question 1
     .global _Z8prodevenii
._Z8prodevenii: @ THIS IS NOT FORMATTED CORRECTLY
     mov     r2, #1     @ sum register
     cmp     r0, r1     @ compare for edge case
     bgt     .L5        @ Edge case where y is greater than x
     tst     r0, #1     @ check if x is even
     jz      .L3        @ if not even, add x by one
     tst     r1, #1      @ check if y is even
     jz      .L4         @ if not even, sub y by one
.L1: @ Main loop
     mul     r2, r2, r1  @ multiply y by sum
     sub     r1, r1, #2  @ decrease y by 2
     cmp     r0, r1      @ check if at end state where y = x
     bne     .L1         @ loop through L1 until y = x
.L2: @ End state
     mul     r0, r0, r2  @ end case where x * sums = final answer
     bx      lr

@ edge cases
.L3:                     @ input checks
     add     r0, #1      @ x + 1
     tst     r1, #1      @ check if y is even
     jz      .L4         @ if not even, sub y by one
     bx      .L1         @ go back to main loop if inputs are formatted correctly
.L4:                     @ sub one to y
     sub     r1, r1, #1  @ y - 1
     bx      .L1         @ go back to main loop if inputs are formatted correctly
.L5:                     @ edge case where y < x
     mov     r0, r2
     bx      lr

@Question 2
