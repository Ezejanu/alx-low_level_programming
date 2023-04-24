#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry
 *
 * Description: This is a program that prints
 *
 * lowercase alphabets omitting e and q
 * Return: Always 0 (Success)
 */

int main(void)
{
	int chr;

	for (chr = 'a'; chr <= 'z'; chr++)
	{
	if (chr != 'e' && chr != 'q')
	putchar(chr);
	}

	putchar('\n');
		return (0);
}
