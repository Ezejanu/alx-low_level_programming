#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry
 *
 * Description: This is a program that prints the alphabet in lowercase,
 *and then in uppercase, followed by a new line.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch;

	for (ch = 'a'; <= 'z'; ch++)
		putchar(ch);

	for (ch = 'A'; <= 'Z'; ch++)
		putchar(ch);
	putchar('\n')

	return (0);
}
