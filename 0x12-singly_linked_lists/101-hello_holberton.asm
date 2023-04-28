section .data
    ; Define a message string with a newline and null terminator
    my_message db 'Hello, Holberton', 10, 0

section .text
    ; Declare the printf function as external
    extern printf
    ; Declare the entry point of the program
    global main

main:
    ; Load the address of the message string into the EDI register
    mov edi, my_message
    ; move Zero into EAX register which represent the 0 return of printf
    mov eax, 0
    ; Call the printf function with the message string as an argument
    call printf

