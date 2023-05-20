#include "main.h"
#include <stdlib.h>


char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}


/**
* _calloc - function allocates memory for an array of nmemb elements
* of size bytes each and returns a pointer to the allocated memory.
* @nmemb: elements of the array
* @size: size of bytes of nmemb elements
* Return: If nmemb or size is 0, then _calloc returns NULL
* If malloc fails, then _calloc returns NULL
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
	return (NULL);

	ptr = malloc(nmemb, size);
	if (ptr == NULL)
	return (NULL);

	_memset(ptr, nmemb * size, 0);
	return (ptr);
}
