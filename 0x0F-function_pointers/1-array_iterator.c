#include <stdlib.h>
#include "function_pointers.h"

/**
* array_iterator - a function that executes a function
* given as a parameter on each element of an array.
* @array: array
* @size: size of the array
* @action: is a pointer to the function you need to use
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && size && action)
	while (size-- > 0)
	/* for (array[size] = 0; array[size] != '\0'; array--) */
	action(*array++);
}
