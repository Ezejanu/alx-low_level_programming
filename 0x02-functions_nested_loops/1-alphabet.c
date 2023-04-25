#include "main.h"

/**
 * main - a function that prints the alphabet
 *
 * in lowercase, followed by a new line
 *
 * Return: void.
 */
void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');

}
