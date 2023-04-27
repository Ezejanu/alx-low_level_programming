#include "main.h"
/**
 * add - to add two integers and give the result
 *
 * @a: first number to be added
 * @b: second number to be added
 * Return: the result
 */
int add(int a, int b)
{
	int c;

	c = a + b;

	if (c > 9)
		_putchar((c / 10) + 48);
	_putchar((c % 10) + 48);

		return (c);
}
