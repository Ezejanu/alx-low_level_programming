#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry
 *
 * Description: This is a program that prints
 *
 * possible different combinations of two digits
 * Return: Always 0 (Success)
 */

int main(void)
{
	int dig;

	for (dig = '0'; dig <= '9'; dig++)
	putchar (dig);

	putchar ('\n');

	return (0); }
