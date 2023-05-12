#include "main.h"

/**
 * calculate_sqrt - a helper function to calculate the square root of a number
 * _sqrt_recursion - a function that returns
 * the natural square root of a number.
 * @n: integer whose sqrt is being found
 * @a: integer - guess for the sqrt of n
 * Return: the natural sqrt of a number
 * If n does not have a natural square root, returns (-1)
 */

int calculate_sqrt(int n, int a)
{
	if (a * a == n)
		return (a);
	else if (a * a > n)
		return (-1);
	else
		return (calculate_sqrt(n, a + 1));
}

/**
 * _sqrt_recursion - a function that returns
 * the natural square root of a number.
 * @n: integer whose sqrt is being found
 * Return: the natural sqrt of a number
 * If n does not have a natural square root, returns (-1)
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else
		return (calculate_sqrt(n, 1));
}
