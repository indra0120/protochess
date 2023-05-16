global _WinMain@16

section .data:
    primo: db "Hello World!", 10
    primo_l: equ $-primo

section .text:
    _WinMain@16: 
        mov eax, 0x4
        mov ebx, 1
        mov ecx, primo
        mov edx, primo_l
        ret 16

        mov eax, 0x1
        mov ebx, 0
        ret 16
