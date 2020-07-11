data segment
s db 'Hello World!$'
data ends

code segment
assume cs:code, ds:data
start: mov ax, data
mov ds, ax

lea dx, s
mov ah, 09H
int 21H

mov ax, 4C00H
int 21H

code ends
end start