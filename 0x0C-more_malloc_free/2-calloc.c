#include "mainh"
#include <stdlib.h>

/**
* _calloc - a function that allocates memory for an array, using malloc
* The _calloc function allocates memory for an array of nmemb elements
* of size bytes each
* @nmemb: elemnets of an array
* @size: size of the elemets of the array
* Return: a pointer to the allocated memory.
* If nmemb or size is 0, then _calloc returns NULL
* If malloc fails, then _calloc returns NULL
*/

void *_calloc(unsigned int nmemb, unsigned int size)

	
