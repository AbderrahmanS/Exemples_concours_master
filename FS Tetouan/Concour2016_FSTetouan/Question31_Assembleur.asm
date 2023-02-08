
; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_template.txt

org 100h


MOV [1010],AX
MOV AX,5
ADD AX,[1010]
SUB AX,3

ret




