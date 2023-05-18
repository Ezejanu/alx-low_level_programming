#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - a function that returns a pointer to
* a 2 dimensional array of integers
* @width: width of array
* @height: height of array
* Return: pointer to the array
*/

int **alloc_grid(int width, int height)
{
	int **tdp, a = 0, b = 0;
	/* tdp stands for 2 dimensional pointer */

	if (width <= 0 || height <= 0)
		return (NULL);

	tdp = (malloc(sizeof(int *) * height));
	if (tdp == NULL)
		return (NULL);

	for (; a < height; a++)
	{
		tdp[a] = (malloc(sizeof(int) * width));
		if (tdp[a] == NULL)
		{
			while (a--)
				free(tdp[a]);
			free(tdp);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
		tdp[a][b] = 0;
	}
	return (tdp);
}
