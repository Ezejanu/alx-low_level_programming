#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - a function that concatenates two strings.
* @s1: string 1
* @s2: string 2
* @n: size of bytes
* Return: pointer shall point to a newly allocated space in memory
* return NULL if the function fails
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1, size2, a, b;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size1 = 0;
	size2 = 0;

	for (; s1[size1] != '\0'; size1++)
	for (; s2[size2] != '\0'; size2++)

	str = malloc(size1 + n + 1);
	if (str == NULL)
		return (NULL);

	for (a = 0; s1[a] != '\0'; a++)
		str[a] = s1[a];
	for (b = 0; b < n; b++)
	{
		str[a] = s2[b];
		a++;
	}
	str[size1 + size2] = '\0';
	return (str);
}
