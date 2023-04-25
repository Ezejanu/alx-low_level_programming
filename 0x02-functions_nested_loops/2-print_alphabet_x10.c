#include "main.h"

/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 *
 * in lowercase.
 *
 * no return
 */
void print_alphabet_x10(void)
{
	char alph;
	int no = 10;

	while (no < 10)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
		_putchar(alph);
		}
		_putchar('\n');
		no++;
	}
}
