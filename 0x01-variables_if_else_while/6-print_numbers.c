#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry
 *
 * Description: This is a program that prints the alphabet in lowercase,
 *and then in uppercase, followed by a new line.
 * Return: Always 0 (Success)
 */

typedef int make_iso_compilers_happy;
int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	putchar (ch);

	putchar ('\n');
	return (0);
}
