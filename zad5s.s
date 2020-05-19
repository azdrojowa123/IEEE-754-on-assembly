.global Basic2
.global Basic

.section .text

Basic: 

# operacje powiazane ze soba zależnościamia
FINIT
FLD1
FLDPI
FLDL2T
FLDLG2
FADD %st(1), %st(0)
FMUL %st(0), %st(1)
FADD %st(2), %st(0)
FMUL %st(0), %st(2)
FADD %st(1), %st(0)
FMUL %st(0), %st(1)
FADD %st(3), %st(0)
FMUL %st(0), %st(3)
FADD %st(0), %st(1)
FMUL %st(2), %st(0)
FADD %st(0), %st(2)
FMUL %st(3), %st(0)
FADD %st(3), %st(0)
FMUL %st(0), %st(3)
FADD %st(2), %st(0)
FMUL %st(0), %st(2)
FADD %st(1), %st(0)
FMUL %st(0), %st(1)
FADD %st(2), %st(0)
FMUL %st(0), %st(2)
ret



#operacje nie powiązane
Basic2: 

FINIT
FLD1
FLDPI 
FLDL2T
FLDLG2
FADD %st(1), %st(0)
FMUL %st(2), %st(0)
FADD %st(3), %st(0)
FMUL %st(1), %st(0)
FADD %st(2), %st(0)
FMUL %st(3), %st(0)
FADD %st(1), %st(0)
FMUL %st(2), %st(0)
FADD %st(3), %st(0)
FMUL %st(1), %st(0)
FADD %st(2), %st(0)
FMUL %st(3), %st(0)
FADD %st(1), %st(0)
FMUL %st(2), %st(0)
FADD %st(3), %st(0)
FADD %st(1), %st(0)
FMUL %st(2), %st(0)
FMUL %st(3), %st(0)
FADD %st(1), %st(0)
FMUL %st(2), %st(0)

ret
