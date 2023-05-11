#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number
 * @n: integer for which the factorial is to be found
 * Return: the factorial or (-1) for (n < 0)
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

