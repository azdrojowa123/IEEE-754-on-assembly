.global changePC
.global defaultPC

.section .data
 value1: .float 10.5
 value2: .float 3.25
 
.section .bss
 .lcomm control, 2
 .lcomm newcontrol, 2

.section .text


defaultPC:

FINIT
FLD value1
FDIV value2

ret

changePC:

FSTCW control
mov control, %ax
and $0b11111100, %ah 
or  $0b00000000, %ah
mov %ax, newcontrol
FLDCW newcontrol
 
FLDS value1
FDIV value2

ret
