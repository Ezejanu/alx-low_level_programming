#include <stdlib.h>
#include "main.h"

/**
* _strdup - a function that returns a pointer to a newly allocated space
* in memory, which contains a copy of the string given as a parameter.
* @str: string for which memory is allocated
* Return: a pointer to the duplicated string.
* It returns NULL if insufficient memory was available
*/

char *_strdup(char *str)
{
	int size, a = 0;
	char *dup;

	if (str == NULL)
		return (NULL);

	size = 0;
		while (str[size] != '\0')
		{
			size++;
		}
	dup = (malloc((size + 1) * sizeof(char)));

	if (dup == NULL)
	{
		return (NULL);
	}
		for (; str[a]; a++)
	{
			dup[a] = str[a];
		/*	dup[size] = '\0'; */
	}
	return (dup);
}
