#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_all -  a function that prints anything
* @format: is a list of types of arguments passed to the function
*/
void print_all(const char * const format, ...)
{
	char *op, *ni = "";
	int i = 0;
	va_list strings;

	va_start(strings, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", ni, va_arg(strings, int));
					break;
				case 'i':
					printf("%s%d", ni, va_arg(strings, int));
					break;
				case 'f':
					printf("%s%f", ni, va_arg(strings, double));
					break;
				case 's':
					op = va_arg(strings, char *);
					if (op == NULL)
						op = "(nil)";
					printf("%s%s", ni, op);
					break;
				default:
				i++;
				continue;
			}
			ni = ", ";
			i++;
		}
	}
	putchar('\n');
	va_end(strings);
}
