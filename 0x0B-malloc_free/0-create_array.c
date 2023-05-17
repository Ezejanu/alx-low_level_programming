#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
* create_array -  a function that creates an array of chars,
* and initializes it with a specific char.
* @size: size of array
* @c: char to be initalised with
* Return: a pointer to the array, or NULL if it fails
*/

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int a;

	array = (malloc(size * sizeof(char)));
		if (array == NULL || size == 0)
		{
			return (NULL);
		}
		for (a = 0; a < size; a++)
		{
			array[a] = c;
		}
		return (array);
}
