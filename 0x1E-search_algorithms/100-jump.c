#include "search_algos.h"
#include <math.h>

/**
 * jump_search - A function that searches for a value in a sorted array
 * using the Jump search algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 * Return: The first index where value is located, otherwise (-1)
 */

int jump_search(int *array, size_t size, int value)
{
	size_t jumpsize;
	size_t start = 0;

	jumpsize = sqrt(size);
	if (array == NULL)
		return (-1);
	if (value < array[start])
	return (-1);
	if (value > array[size - 1])
	{
		for (; start < (size); start += jumpsize)
			printf("Value checked array[%lu] = [%d]\n", start, array[start]);
		printf("Value found between indexes [%lu] and [%lu]\n",
				size - 1, size - 1 + jumpsize);
		start = size - 1;
		for (; start < size; start++)
		{
			printf("Value checked array[%lu] = [%d]\n", start, array[start]);
			return (-1);
		}
	}
	while (start < size)
	{
		printf("Value checked array[%lu] = [%d]\n", start, array[start]);
		if (value > array[start + jumpsize])
			start += jumpsize;

		else
		{
			printf("Value found between indexes [%lu] and [%lu]\n",
					start, start + jumpsize);
			for (; start <= (start + jumpsize); start++)
			{
				printf("Value checked array[%lu] = [%d]\n", start, array[start]);
				if (array[start] == value)
					return (start);
			}
		}
	}
	return (-1);
}
