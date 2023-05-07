#include "main.h"

/**
 * leet- Write a function that encodes a string into 1337
 * @s: string to be evaluated
 * Return: return value
 *
 */

char *leet(char *s)
{
	int a, b;
	char slet[] = "aAeEoOtTlL";
	char snum[] = "4433007711";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; b < 10 ; b++)
		{
			if (s[a] == slet[b])
			{
				s[a] = snum[b];
			}
		}
	}
	return (s);
}

