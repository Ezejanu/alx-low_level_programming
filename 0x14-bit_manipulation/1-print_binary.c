#include "main.h"
#include <stdio.h>

/**
* print_binary -  a function that prints the binary representation of a number
* @n: number to be converted to binary
*/


void print_binary(unsigned long int n)
{
	int a = 0;
	unsigned long int binary = 0;

	if (n == 0)
{
		_putchar('0');
		return;
}
	while (n)
	{
		a++;
		binary = (binary << 1) | (n & 1);
		n >>= 1;
	}
	while (a)
	{
		_putchar((binary >> (--a)) & 1 ? '1' : '0');
	}
}
