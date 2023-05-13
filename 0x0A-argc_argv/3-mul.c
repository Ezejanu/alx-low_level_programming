#include <stdio.h>
#include <stdlib.h>

/**
* main - a program that multiplies two numbers.
* @argc: length of string argv
* @argv: string of length argc
* Return: 0 for success, else 1
*/

int main(int argc, char *argv[])
{
	int a, mul = 1;
	char b[] = "Error";

	if (argc <= 2)
	{
		printf("%s\n", b);
		return (1);
	}
	else
	{
	for (a = 1; a < argc; a++)
	{
		mul *= atoi(argv[a]);
	}
		printf("%d\n", mul);
		return (0);
	}
}
