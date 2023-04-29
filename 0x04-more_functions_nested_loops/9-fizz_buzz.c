#include <stdio.h>

/**
 * main -  a program that prints the numbers from 1 to 100,
 * followed by a new line. But for multiples of three print Fizz
 * instead of the number and for the multiples of five print Buzz.
 * For numbers which are multiples of both three and five print FizzBuzz
 *
 * Return: 0 Always
 */

int main(void)
{
	int a;
	char b[8] = "FizzBuzz";
	char c[] = "Fizz";
	char d[] = "Buzz";

	for (a = 1; a <= 100; a++)
	{
		if ((a % 3 == 0) && (a % 5 == 0))
		{
			printf("%s ", b);
		}
		else if (a % 3 == 0)
		{
			printf("%s ", c);
		}
		else if (a % 5 == 0)
		{
			printf("%s ", d);
		}
		else
		{
			printf("%d ", a);
		}
	}
		printf("\n");
		return (0);
}
