#include "main.h"
/**
 * _strchr - a function that locates a character in a string.
 * @s: string containing character 'c'
 * @c: character to be located
 * Return: a pointer to the first occurrence of c in the string s,
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] >= '\0'; a++)
		/* why '>=' instead of '!='? */
	{
		if (s[a] == c)
		return (s + a);
		/* why 's+a' instead of 's[a]'? */
	}
	return ('\0');
}
