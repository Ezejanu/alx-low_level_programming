#include "main.h"
#include <stdlib.h>

/**
* array_range -  a function that creates an array of integers
* @min: min range
* @max: max range
* Return: the pointer to the newly created array
*/

int *array_range(int min, int max)
{
	int *rng, slen, a;

	slen = max - min + 1;
	rng = malloc(slen * sizeof(int));
	if (min > max || rng == NULL)
	return (NULL);

	for (a = 0; a < slen; a++)
	rng[a] = min++;
	return (rng);
}
