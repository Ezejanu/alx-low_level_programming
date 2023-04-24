#include <stdio.h>
/**
 * main - Entry
 * Description: This is a program that prints all
 *
 * single digit numbers of base 10 starting from 0, followed by a new line
 * Return: 0 Always (Success)
 */

int main(void)
{
	int dig;

	for (dig = '0'; dig <= '9'; dig++)
	putchar (dig);

	putchar ('\n');

	return (0);
}
