#include "main.h"

/**
 * string_toupper - a function that changes all lowercase letters
 * of a string to uppercase.
 * @string: string to be evaluated
 * Return: return string
 */

char *string_toupper(char *string)
{
	int n;

	for (n = 0; string[n] != '\0'; n++)
	{
		if (string[n] >= 97 && string[n] <= 122)
		{
			string[n] = string[n] - 32;
		}
	}
	return (string);
}
