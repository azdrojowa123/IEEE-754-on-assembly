.global Basic2
.global Basic

.section .text

.macro Timer
xor %eax, %eax
cpuid 
rdtsc
.endm

#operacje nie powiązane ze sobą
Basic:
push %ebx
push %esi
 

FINIT
FLD1
FLDPI
FLDL2T
FLDLG2
FLDPI

Timer 
movl %eax, %esi

.rept 10
FADD %st(0), %st(1)
FMUL %st(0), %st(2)
FADD %st(0), %st(3)
FMUL %st(0), %st(4)
.endr

Timer 
movl %eax, after
movl %esi, before

pop %esi
pop %ebx
ret



#operacje  powiązane
Basic2: 
push %ebx
push %esi

FINIT
FLD1
FLDPI 
FLDL2T
FLDLG2

Timer 
movl %eax, %esi

.rept 10
FADD %st(1), %st(0)
FMUL %st(2), %st(0)
FADD %st(3), %st(0)
FMUL %st(4), %st(0)
.endr

Timer
movl %eax, after
movl %esi, before

pop %esi
pop %ebx

ret
