.global PrecisionFlag
.global ZeroDivideFlag

.section .data
value1:
 .float 0
value2:
 .float 1
value3:
 .float 100000000000

.section .text

ZeroDivideFlag: 

FINIT
FLDS value2
FIDIV value1

ret

PrecisionFlag:
FINIT
FLD value2
FIDIV value3

ret
