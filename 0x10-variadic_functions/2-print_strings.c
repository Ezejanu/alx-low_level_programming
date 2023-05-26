#include "variadic_functions.h"
#include <stdarg.h>

/**
* print_strings -  a function that prints strings, followed by a new line.
* @separator: is the string to be printed between the strings
* @n: the number of strings passed to the function
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	
	va_start(strings, n);

	if (separator == NULL)
		return;
	if (n == NULL)
		printf("nil");
