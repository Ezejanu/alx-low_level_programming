#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 * @s: string for which the function returns its length
 * Return: length of string
 */

int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	a++;
	return (a);
}
