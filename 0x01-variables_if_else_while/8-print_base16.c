#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry
 *
 * Description: This is a program that prints the numbers of base 16
 * in lowercase, followed by a new line.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int no;
	int ch;

		for (no = '0'; no <= '9'; no++)
		putchar (no);

		for (ch = 'a'; ch <= 'f'; ch++)
		putchar (ch);

		putchar ('\n');
		return (0);
}
