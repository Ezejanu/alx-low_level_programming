#include "main.h"
#include <stdlib.h>

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

	ptr = calloc(nmemb, size);
	if (ptr == NULL)
	return (NULL);

	return (ptr);
}
