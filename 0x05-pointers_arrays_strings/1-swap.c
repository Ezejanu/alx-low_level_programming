#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers.
 * @a: value to be swapped
 * @b: value to be swapped
 */

void swap_int(int *a, int *b)
{
	int anew = *b;

	*b = *a;
	*a = anew;

}
