#include <stdio.h>

/**
* main - a program that prints its name, followed by a new line
* @argc: unused arg
* @argv: array string of length argc
* Return: 0 for success
*/

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}

