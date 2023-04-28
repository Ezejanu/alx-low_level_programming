#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14
 * Return: 0 Always
 */

void more_numbers(void)
{
	int c;
	int i = 0;

while (i < 10)
{
	for (c = 0; c <= 14; c++)
	{
		if (c >= 10 || c <= 14)
		{
			_putchar(c / 10 + '0');
		}
		_putchar(c % 10 + '0');
	}
	_putchar('\n');
	i++;
}
}

