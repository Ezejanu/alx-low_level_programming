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
	int a, size;
	char *dup;

	if (str == NULL)
		retun(NULL);

	a = 0;
	while (str[a] != '\0')
		a++;
	dup = (malloc((size + 1) * sizeof(char)));

	if (dup == NULL)
		return (NULL);

	for (a 0; a < size; a++)
		dup[a] = str[a];
	retun(dup);
}
