#include "main.h"
#include "stdio.h"
/**
 * print_to_98 - to print all naturan numbers from n to 98
 *
 * @n: number to count from
 */
void print_to_98(int n)
{
	int goal;

	if (n < 98)
	for (n = goal; n < 98; n++)
		printf("%d", n);
	else
		for (n = goal; n > 98; n--)
			printf("%d, ", n);
	printf("98\n");
}
