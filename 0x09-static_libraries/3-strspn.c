#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: string to be searched
 * @accept: substring
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
	for  (b = 0; accept[b] != s[a]; b++)
		if (accept[b] == '\0')
		return (a);
	}
	return (a);
}
