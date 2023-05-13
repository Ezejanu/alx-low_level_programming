#include <stdio.h>

/**
* main - a program that prints all arguments it receives
* @argc: length of string
* @argv: string od length argc
* Return: 0
*/

int main(int argc /*__attribute__((unused))*/, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
