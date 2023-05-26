#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>

/**
* print_strings -  a function that prints strings, followed by a new line.
* @separator: is the string to be printed between the strings
* @n: the number of strings passed to the function
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *str;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char *);

		if (separator == NULL)
			printf("%s", str);
		if (str == NULL)
			printf("nil");
		else 
			printf("%s%s", separator, str);
	}

	va_end(strings);
	putchar('\n');
}
