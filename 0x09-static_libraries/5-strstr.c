#include "main.h"

/**
 * _strstr - a function that locates a substring.
 * The _strstr() function finds the first occurrence of the substring needle
 * in the string haystack. The terminating null bytes (\0) are not compared
 * @haystack: string to be searched
 * @needle: a substring to be located in string haystack
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int a, b;
	char *c;

	for (a = 0; haystack[a] != '\0'; a++)
	{
		for (b = 0; needle[b] != '\0'; b++)
		{
			if (needle[b] != haystack[a + b])
			{
				break;
			}

		}
			if (needle[b] == '\0')
			/* end of needle has been reached and match found */
			{
				c = &haystack[a];
				return (c);
			}

	}
	return ('\0'); /* no match was found */
}
