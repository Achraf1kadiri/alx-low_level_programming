section .data
    format db 'Hello, Holberton', 0

section .text
    global main

main:
    push rdi
    mov rdi, format
    call printf
    pop rdi
    mov rax, 60
    xor rdi, rdi
    syscall

