#include <stdio.h>
#include <stdlib.h>
/**
* main - a program that adds positive numbers
* @argc: length of argv
* @argv: string of length argc
* Return: 0 for success, else 1
*/

int main(int argc, char *argv[])
{
	int a;
	unsigned int sum = 0;
	char b[] = "Error";

		if (argc <= 1)
		{
			printf("%d\n", 0);
		}
	else
		{
	for (a = 1; a < argc; a++)
		{
	long int strtol(const char *str, char **endptr, int base);
	char *endptr;
	long c = strtol(argv[a], &endptr, 10);

		if (*endptr != '\0')
		{
			printf("%s\n", b);
			return (1);
		}
	if (atoi(argv[a]) > 0)
	sum += c;
		}
			printf("%d\n", sum);
		}
		return (0);
}
