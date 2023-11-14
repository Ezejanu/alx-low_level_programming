#include "search_algos.h"

/**
 * linear_search - A function that searches for a value in
 * an array of integers using the Linear search algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: Value to search for
 * Return: The first index where value is located, else -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t marker = 0;

	if (array == NULL)
		return (-1);

	for (; marker < size; marker++)
	{
		printf("Value checked array[%lu] = [%d]\n", marker, array[marker]);
		if (array[marker] == value)
			return ((int)(marker));
	}
	return (-1);
}
