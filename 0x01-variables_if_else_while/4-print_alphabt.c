#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 * This is a program that prints the alphabet in lowercase (omitting q and e),
 * followed by a new line
 * Return 0 Always: (Success)
 */

int main(void)
{
	int chr;

	for (chr = 'a'; chr <= 'z'; chr++)
		if (chr == 'e' && chr == 'q')
			continue;
	putchar(chr);

	putchar('\n');
		return (0);
}
