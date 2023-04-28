#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 * @n:  is the number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}
