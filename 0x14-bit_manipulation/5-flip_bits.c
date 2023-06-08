#include "main.h"

/**
* flip_bits - a function that returns the number of bits
* you would need to flip to get from one number to another.
* @n: int a
* @m: int b
* Return: no of bits
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int xor_res = n ^ m;

	while (xor_res != 0)
	{
		if (xor_res & 1)
			count++;
		xor_res >>= 1;
	}

	return (count);
}
