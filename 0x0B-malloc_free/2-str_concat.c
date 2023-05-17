#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
* _strlen - a function to find the length of a string
* @string: string whose length is to be found
* Return: integer whose value is the string length
*/

int _strlen(char *string)
{
	int a = 0;

	while (string[a] != '\0')
		a++;
	return (a);
}

/**
* str_concat - a function that concatenates two strings
* @s1: 1st string to be concatenated
* @s2: 2nd string to be concatenated
* Return: the concatenated string
*/

char *str_concat(char *s1, char *s2)
{
	int size1, size2, a = 0;
	char *str;

	if (s1 == NULL || s2 == NULL)
		s1 = s2 = "\0";

	size1 = strlen(s1);
	size2 = strlen(s2);
	str = (malloc((size1 + size2) * sizeof(char) + 1));

	for (; a < size1; a++)
	str[a] = s1[a];

	for (; a < size1 + size2; a++)
	str[a] = s2[a - size1];

	str[size1 + size2] = '\0';
	return (str);
}
