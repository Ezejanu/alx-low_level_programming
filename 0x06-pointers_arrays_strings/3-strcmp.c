#include "main.h"

/**
 * _strcmp - a function that compares two strings.
 * @s1: 1st string to be compared
 * @s2: 2nd string to be compared
 * Return: value of b - a value <0 for s1 less than or not same
 * or >0 for s1 is greater and 0 for the same
 */

int _strcmp(char *s1, char *s2)
{
	int a, b;

	/* for (a = 0; ((s1[a] == s2[a]) && (s1[a] != '\0')); a++) */

	a = 0;
	while (s1[a] == s2[a] && s1[a] != '\0')
	{
		a++;
	}
	b = s1[a] - s2[a];
	return (b);
}
