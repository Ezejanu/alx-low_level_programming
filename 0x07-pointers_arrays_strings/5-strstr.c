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
				/**
				 * (b + 1) is checking that the next value is
				 * NULL, which means we've reached the end and
				 * a match has been found.
				 * Another way to write this would be to check
				 * (needle[b] == '\0') but this would be outside
				 * the 2nd 'for' loop. If we use (b == '\0') to
				 * check inside the 'for' loop, it means we won't
				 * actually ever check that we've reached the
				 * end of needle because the NULL will always
				 * be != to the next value in haystack.
				 */
			{
				c = &haystack[a];
				return (c);
			}

	}
	return ('\0'); /* no match was found */
}
