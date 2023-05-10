#include "main.h"
/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * _strpbrk() function locates the first occurrence in the string s
 * of any of the bytes in the string accept
 * @s: string to be searched
 * @accept: string 2
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int a, b;
	char *c;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (accept[b] == s[a])
			{
				c = &s[a];
				/**
				 * Investigate why c = &s[a] and
				 * c = &accept[b] don't give the same output
				 * if they are indeed equal
				 */
				return (c);
			}
		}
	}
	return (0);
}
