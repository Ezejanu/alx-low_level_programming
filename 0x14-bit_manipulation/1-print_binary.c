#include "main.h"
#include <stdio.h>

/**
* print_binary -  a function that prints the binary representation of a number
* @n: number to be converted to binary
*/


void print_binary(unsigned long int n)
{
	int b, sigBits = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (b = (sizeof(unsigned long int) * 8) - 1; b >= 0; b--)
	{
		unsigned long int mask = 1UL << b;

		if (n & mask)
		{
			_putchar('1');
			sigBits = 1;
		}

		else if (sigBits)
			_putchar('0');
	}
}
