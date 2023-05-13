#include <stdio.h>

/**
* main -  a program that prints the number of arguments passed into it
* @argc: the no of arguments passed
* @argv: a string of size argc
* Return: 0 for success
*/

int main(int argc, char *argv[]/* --attribute--((unused))*/)
{
	(void)argv;
	printf("%d\n", (argc - 1));
	return (0);
}
