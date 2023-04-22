#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: Get a random number and print the number
 * positive,nagetive or zero
 * Return: Always 0 (success)  
 */
int main(void)

{
	int n; int LD; 
	srand(time(0));
	n = rand() - RAND_MAX / 2;
		if (LD == 0)
	{
		printf("LD of %d is %d and is 0\n", n, LD);
	}
		else if (LD > 5)
	{	
			printf("LD of %d is %d and is greater than 5\n", n, LD);
	}
		else if (LD < 6)
	{
			printf("LD of %d is %d and is less than 6 and not 0\n", n, LD);
	}
	return (0);
}
