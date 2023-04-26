#include "main.h"
/**
 * print_last_digit - returns the value of the last digit
 *
 * @a: integer value to be evaluated
 * Return: the value of the last digit
 */
int print_last_digit(int a)
{
	int last_digit;

	last_digit = (a % 10);

		if (last_digit < 0)
		{
			last_digit = (last_digit * -1);
				_putchar('0' + last_digit);
		}
		return (last_digit);
}
