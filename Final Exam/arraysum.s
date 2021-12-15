@ Dominic Zecchino    Section A
@ I pledge my honor that I have abided by the Stevens Honor System.
@ Pledge value: Decimal Value: 625

@ Problem 1
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

@Problem 2
.global _Z3sumPci

_Z3sumPci:
push	{r4, r5}
@r3 is what we will use to multiply each character by
mov	r3, #0
mov	r4, #0
mov	r5, #0
.L1:
ldrb	r2, [r0]	@loaded ascii value of character into array
add	r3, r3, #1
@below is multiplying the value and loading it into r4
mul	r4, r2, r3
@loaded r4 into r5 before i am going to clear r4
add	r5, r4, r5
mov	r4, #0
add	r0, r0, #1
subs	r1, #1
bne	.L1
mov	r0, r5
pop	{r4, r5}
bx	lr

@Problem 3
.global _Z5integPdid
_Z5integPdid:
     vmov          s15, r1
     vct.f64.s32   d0, s15 @ d0 has the degree
     mov           r3, #0     @ counter
     vldr.f64      d1, [r2] @ x value
     vldr.f64      d6, #0 @ sum = 0

.L31
     vldr.f64      d2, [r0] @ numerator
     vsub.f64      d0, d0, #1 @ n-1 (denominator)
     vdiv.f64      d4, d2, d0 @ num / denom
     dmul.f64      d5, d4, d1 @ frac * x
     dadd.f64      d6, d6, d5 @ add into total sum
     cmp           r1, r3 @ compare
     bne           .L31
     add           r3, r3, #1 @ up counter
     ldr           r0, d6
     bx            lr

@Problem 4
.global _Z9fftSortofPdi
__Z9fftSortofPdi:
  mov     r3, #1
@loop for a+b
.L1:
  cmp     r2, r1
  beq     .L3
  vldr.f64  d0, [r0]
  mov     r2, r0
  add     r2, r2, #8
  vldr.f64  d1, [r2]
  vadd.f64     d0, d0, d1
  ldr     r0, d0
  add     r0, r0, #8
@loop for a-b
.L2:
  cmp       r3, r1
  beq       .L3
  vldr.f64  d0, [r0]
  mov       r2, r0
  add       r2, r2, #8
  vldr.f64  d1, [r2]
  vsub.f64  d0, d0, d1
  ldr       r0, d0
  add       r0, r0, #8
  bx        .L1
.L3:
  bx lr

@Extra Credit

@ 1. Clock speed sets the speed at which the processor able to send and
@    analyze instructions. Doubling clock speed for the CPU
@    would means that the CPU can send and read instructions twice as fast.
@    Not doubling the memory means that no more processes can be handled at
@    any given time but the processes will just be completed twice as fast.

@2.  Doubling bus width means that the CPU can pull double the amount of
@    data per the data bus's clock speed. Thus, the speed at which instructions
@    are computed will double due to the increased amount of data that can be read
@    per data bus clock cycle.
