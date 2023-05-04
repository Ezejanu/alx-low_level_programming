#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: string to be reversed
 *
 */

void rev_string(char *s)
{
	while (*s != '\0')
	{
		s++;
	}
	s--;
	while (*s != '\0')
	{
		s--;
	}
	_putchar(*s);
}
