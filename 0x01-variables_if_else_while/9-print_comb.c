#include <stdio.h>

/**
 * main - This is a a program that prints all possible
 * combinations of single-digit numbers
 * Return: 0 Always (success)
 */

int main(void)
{
	int ch;

	for (ch = '0'; ch <= '9'; ch++)
		putchar (ch);
	if (ch < '9')
	{
		putchar (',');
		putchar (' ');
	}

	return (0);
}
