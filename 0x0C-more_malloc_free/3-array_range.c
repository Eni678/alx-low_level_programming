#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - A function that creates an array of integers
 * @min: min number to start
 * @max: max number to start
 * Return: A pointer to the new created array or NULL on failure
 */
int *array_range(int min, int max)
{
	int *new_array;
	int diff, i = 0;

	if (min > max)
		return (NULL);

	diff = max - min;
	new_array = malloc((diff + 1) * sizeof(int));
	if (new_array == NULL)
		return (NULL);

	while (i <= diff)
	{
		new_array[i] = min++;
		i++;
	}

	return (new_array);
}
