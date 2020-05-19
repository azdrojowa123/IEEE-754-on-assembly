SYSREAD = 1

.global ReadStatusRegister
.global ReadControlWord
.global SaveControlWord

.section .bss
 .lcomm control, 2
 .lcomm data, 2 

.text
 

ReadStatusRegister:
push %ebp
mov %esp, %ebp 
push %ebx

FSTSW %ax 

pop %ebx
pop %ebp
ret

ReadControlWord:
push %ebp
mov %esp, %ebp
push %ebx

FSTCW control
mov control, %eax

pop %ebx
pop %ebp
ret

SaveControlWord:
push %ebp 
mov %esp, %ebp

movl 8(%ebp), %eax

movw  %ax, data
FLDCW data

pop %ebp

ret 

