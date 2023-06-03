	format db 'Hello, Holberton', 10, 0;

	global main
	extern printf

main:
	push format; Push the address of the format string onto the stack
	call printf; Call printf with the address of the format string as the argument
	add esp, 4; Adjust the stack pointer to remove the pushed argument
	xor eax, eax; Set eax to 0 to indicate successful execution
	ret; Return control to the operating system
