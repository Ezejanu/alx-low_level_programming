#include "search_algos.h"

/**
 * binary_search - A function that searches for a value in a
 * sorted array of integers using the Binary search algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 * Return: index where value is stored
 */

int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (bin_search_recursive(array, 0, size - 1, value));
}


/**
 * bin_search_recursive - a helper function for to implement binary search
 * recursively
 * @array: A pointer to the first element of the array to search in
 * @start: position to start search
 * @end: position to end
 * @value: Value to search for
 * Return: index where value is stored
 */

int bin_search_recursive(int *array, size_t start, size_t end, int value)
{
	size_t midpoint;
	size_t i;

	if (start <= end)
	{
		printf("Searching in array: ");
		for (i = start; i <= end; i++)
		{
			printf("%d", array[i]);
			if (i < end)
				printf(", ");
		}
		printf("\n");

		midpoint = start + (end - start) / 2;

		if (array[midpoint] == value)
			return (midpoint);

		else if (value < array[midpoint])
			return (bin_search_recursive(array, start, midpoint - 1, value));

		else if (value > array[midpoint])
			return (bin_search_recursive(array, midpoint + 1, end, value));
	}
	return (-1);
}
