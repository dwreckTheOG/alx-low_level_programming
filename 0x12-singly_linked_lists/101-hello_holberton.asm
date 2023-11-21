section .data
    hello db 'Hello, Holberton', 0

section .text
    global main
    extern printf

main:
    push rbp
    mov rdi, hello
    call printf
    pop rbp

    ; Exit the program
    mov rdi, 0
    call exit

    ; Define exit function
    extern exit