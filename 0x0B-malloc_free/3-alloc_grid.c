#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - a function that returns a pointer to a
 * 2 dimensional array of integers.
 * @width: An input integer at number of columns
 * @height: An input integer at number of rows
 * Return: Pointer to a 2D array, NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **array = malloc(height * sizeof(*array)); /* allocate the memory to height*/
	int i, j, k;

	if (width <= 0 || height <= 0)
		return (NULL);

	if (array == NULL)
	{
		free(array);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(*array[i]));
		if (array[i] == NULL)
		{
			for (k = 0; k < i; k++)
			{
				free(array);
			}
			free(array[i]);
			free(array);
		}
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}
	return (array);
}
