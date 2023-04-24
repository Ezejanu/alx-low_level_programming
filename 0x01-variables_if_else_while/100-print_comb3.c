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
	int a;
	int b;

	for (a = '0'; a <= '8'; a++)
	for (b = 'a+1'; b <= '9'; b++)

		if (a != b)
			putchar (a);
			putchar (b);

			if (a == '8' && b == '9')
				break;
			putchar (',');
			putchar (' ');

		putchar ('\n');
		return (0);

