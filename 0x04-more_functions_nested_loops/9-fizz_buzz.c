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
	char FizzBuzz[8];
	char Fizz[4];
	char Buzz[4];

	for (a = 1; a <= 100; a++)
	{
		if ((a % 3 == 0) && (a % 5 == 0))
		{
			printf("%s ", "FizzBuzz");
		}
		else if (a % 3 == 0)
		{
			printf("%s ", "Fizz");
		}
		else if (a % 5 == 0)
		{
			printf("%s ", "Buzz");
		}
		else
		{
			printf("%d ", a);
		}
	}
		return (0);
}
