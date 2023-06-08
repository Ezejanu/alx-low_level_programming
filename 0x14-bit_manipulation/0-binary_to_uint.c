#include "main.h"
#include <stdlib.h>

/**
* binary_to_uint -  function that converts a binary number to an unsigned int
* @b: is pointing to a string of 0 and 1 chars
* Return: the converted number, or 0 if it fails
*/

unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int decim = 0;
/*	unsigned int sum = 0; */

	if (b == NULL)
		return (0);

	for (a = 0; b[a] != '\0'; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		decim = (decim << 1) + (b[a] - '0');
	}
	return (decim);
}




