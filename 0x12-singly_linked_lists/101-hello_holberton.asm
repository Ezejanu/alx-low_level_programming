	format db 'Hello, Holberton', 10, 0;

	global main
	extern printf

main:
	mov edi, format ; Move the address of the format string into the edi register
	xor eax, eax; Set eax to 0 to indicate successful execution
	call printf ; Call printf with the address of the format string as the argument
	xor eax, eax ; Set eax to 0 (optional, for clarity)
	ret ; Return control to the operating system
