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
	/**
	 * while (s[a] != '\0')
	 * if (s[0] >= 97 && s[0] <= 122)
	 * {s[0] = s[0] - 32;
	 * }
	 */
	{
		if
			(s[a] == ' ' || s[a] == '\t' || s[a] == '\n' ||
			 s[a] == ',' || s[a] == ';' || s[a] == '.' ||
			 s[a] == '!' || s[a] == '?' || s[a] == '"' ||
			 s[a] == '(' || s[a] == ')' || s[a] == '{'
			 || s[a] == '}')

			{
				if (s[a + 1] >= 97 && s[a + 1] <= 122)
				{
					s[a + 1] = s[a + 1] - 32;
				}
			}
		/*	a++; */
	}
	return (s);
}
