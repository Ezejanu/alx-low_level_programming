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

	for (no = 0; no < 10; no++)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		_putchar(alph);
		_putchar('\n');
	}
}
