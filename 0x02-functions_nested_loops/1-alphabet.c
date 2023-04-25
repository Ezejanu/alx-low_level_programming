#include "main.h"

/**
 * main - a function that prints the alphabet
 *
 * in lowercase, followed by a new line
 *
 * Return: Always 0.
 */
int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		_putchar(alph);
	_putchar('\n');

	return (0);
}
