#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 * This is a program that prints the alphabet in lowercase (omitting q and e),
 * followed by a new line
 * Return 0 Always: (Success)
 */

void main(void)
{
	int chr;

	for (chr = 'a'; chr <= 'd'; chr = 'f'; chr < 'q'; chr > 'q';
			chr <= 'z'; chr++)
		putchar(chr);
		putchar('\n');
		return (0);
}
