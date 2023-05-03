#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse,
 * followed by a new line.
 * @s: string to be printed
 */

void print_rev(char *s)
{
	/* int a = 0; */

	while (*s != '\0')
	{
		s++;
	}
		/* a++; */
	s--;
	while (*s) /* != '\0') */
	{
	/*	s--; */
	_putchar(*s);
	s--;
	}
	_putchar('\n');
}

