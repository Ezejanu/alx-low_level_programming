#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string
 * @s: string to be evaluated
 * Return: return value
 *
 */

char *cap_string(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] >= 65 && s[a] <= 90)
		{
			s[a] = s[a] + 32;
		}
	}
	return (s);
}
