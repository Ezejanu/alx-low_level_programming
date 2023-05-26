#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - a function that returns the sum of all its parameters
* @n: no of arguments to be added
* Return: sum of all parameters
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list sumargs;
	int sum = 0;
	unsigned int i = 0;

	if (n == 0)
	return (0);

	va_start(sumargs, n);

	for (; i < n; i++)
	{
		sum += va_arg(sumargs, int);
	}

	va_end(sumargs);
	return (sum);
}
