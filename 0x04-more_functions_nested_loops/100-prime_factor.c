#include <math.h>
#include <stdio.h>

/**
 * main - a program that finds and prints the largest prime factor
 * of the number 612852475143, followed by a new line.
 * Return: Always 0
 */

int main(void)
{
	long int pnumb;
	/* pnumb is a prime number of numb */
	long int numb = 612852475143;
	/* numb is the no for which we are finding its largest prime number */

	for (pnumb = 3; pnumb < sqrt(numb); pnumb += 2)
	{
		while ((numb % pnumb == 0) && (numb != pnumb))
			numb = numb / pnumb;
	}
	printf("%ld\n", numb);
	return (0);
}

