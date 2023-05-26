#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
* print_numbers - a function that prints numbers, followed by a new line.
* @separator: is the string to be printed between numbers
* @n: number of integers passed to the function
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list sumargs;
	unsigned int i;
	int numbs = 0;

	va_start(sumargs, n);
	if (separator == NULL)
		return;

	for (i = 0; i < n; i++)
	{
		numbs = va_arg(sumargs, int);
		printf("%d", numbs);
		if (i < n - 1 && separator != NULL)
			printf("%c", *separator);

	}
	va_end(sumargs);
	putchar('\n');

}
