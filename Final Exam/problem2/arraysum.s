.global _Z3sumPKci

_Z3sumPKci:
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
