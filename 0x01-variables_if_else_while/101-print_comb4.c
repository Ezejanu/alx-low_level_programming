#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry
 *
 * Description: This is a program that prints the alphabet in lowercase,
 *and then in uppercase, followed by a new line.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;
	int b;
	int c;

	for (a = '0'; a <= '8'; a++)
	{
		for (b = a + 1; b <= '8'; b++)
		{
			for (c = b + 1; c <= '9'; c++)
			{
				if (a != b && b != c)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a == '7' && b == '8' && c == '9')
						break;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
