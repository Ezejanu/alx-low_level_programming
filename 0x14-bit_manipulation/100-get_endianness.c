#include "main.h"

/**
* get_endianness - a function that checks the endianness
* Return: 0 if big endian, 1 if little endian
*/

int get_endianness(void)
{
	int a = 1;
	char  *b;

	b = (char *) &a;
	if (*b == 1)
		return (1);
	return (0);
/* lines 14 - 16 can also be replaced by 'return ((int) *c);' */
}
