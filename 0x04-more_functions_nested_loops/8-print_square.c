#include "main.h"

/**
 * print_square - a function that prints a square, followed by a new line
 * @size: size of the square
 */

void print_square(int size)
{

	if (size < 0)
	{
		_putchar('\n');
	}

	for (size = 0; size <= (size * size); size++)
	{
		int side;

		for (side = 0; side <= size; side++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
