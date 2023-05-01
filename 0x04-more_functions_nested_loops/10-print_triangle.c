#include "main.h"

/**
 * print_triangle - a function that prints a triangle
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int rows;
	int columns;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (rows = 0; rows <= size; rows++)
	{
		for  (columns = 0; columns <= size; columns++)
		{
			int sum = (rows + columns);
			
			if (sum < size)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
	_putchar('\n');
	}
}
