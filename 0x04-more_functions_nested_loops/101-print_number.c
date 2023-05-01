#include "main.h"

/**
 * print_number - a function that prints an integer
 * @n: number to be printed
 * Return: Always 0
 */

void print_number(int n)
{
	int numb = n;

	if (n < 0)
	{
		_putchar(45);
		numb = -numb;
	}
	if (numb / 10)
	{
		print_number(numb / 10);
	}
	_putchar(numb % 10 + 48);
	/* return (0); */
}
