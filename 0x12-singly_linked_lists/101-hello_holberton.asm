global main
message:
db "Hello, Holberton", 10
section .text
main:
mov rax, 1
mov rdi, 1
mov rsi, message
mov rdx, 17
syscall

mov eax, 60
xor rdi, rdi
syscall
