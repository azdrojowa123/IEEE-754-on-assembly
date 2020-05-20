.global doAdd
.global changeRCup
.global changeRCdown

.section .data
value1:
 .float 10
value2:
 .float 3

.section .bss 
 .lcomm control, 2
 .lcomm newcontrol, 2
 .lcomm control2, 2
 .lcomm newcontrol2, 2

.section .text

doAdd:

FINIT 
FLD value1
FDIV value2

ret

changeRCup:

FINIT 

FSTCW control 
mov control, %ax
and $0b11110011, %ah 
or  $0b00001000, %ah
mov %ax, newcontrol 
FLDCW newcontrol

FLD value1
FDIV value2

ret

changeRCdown:

FINIT

xor %eax, %eax
FSTCW control2
mov control2, %ax
and $0b11110011, %ah
or  $0b00000100, %ah
mov %ax, newcontrol2
FLDCW newcontrol2

FLD value1
FDIV value2

ret 
