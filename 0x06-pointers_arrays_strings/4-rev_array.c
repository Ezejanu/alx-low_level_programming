#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: pointer
 * @n: no of the elements of the array
 */

void reverse_array(int *a, int n)
{
	int c, d;

	for (c = 0; c < n--; c++)
	{
		d = a[c];
		a[c] = a[n];
		a[n] = d;
	}

	/* for (n = 0; n[a] != '\0'; n++) */
	/*	for (n = 0; n[a] != '\0'; n++) */
	/*		_putchar(a); */
}
