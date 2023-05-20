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
	unsigned int size1, size2, a = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size1 = 0;
	size2 = 0;

	for (; s1[size1] != '\0'; size1++)
	for (; s2[size2] != '\0' && size2 < n; size2++)

	str = malloc(size1 + size2 + 1);
	if (str == NULL)
		return (NULL);

	for (; a < size1; a++)
		str[a] = s1[a];
	for (; a < size1 + size2; a++)
		str[a] = s2[a - size1];

	str[size1 + size2] = '\0';
	return (str);
}
