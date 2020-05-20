.global changePC
.global defaultPC

.section .data
 value1: .float 10.5
 value2: .float 3.25
 

.section .bss
 .lcomm control, 2
 .lcomm newcontrol, 2
 .lcomm zmienna, 10

.section .text

defaultPC:

mov 4(%esp), %edx

FLD value1
FDIV value2

fstpt (%edx) 
 

ret

changePC:

mov 4(%esp), %edx #pobranie adresu do rejestru 

FSTCW control
mov control, %ax
and $0b11111100, %ah 
or  $0b00000000, %ah
mov %ax, newcontrol
FLDCW newcontrol
 
FLDS value1
FDIV value2
fstpt (%edx) #adresowanie pośrednie rejestrowe


ret
