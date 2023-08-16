#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - A function that executes a function given
 * as a parameter on each element of an array
 * @size: Is the size of array
 * @array: a pointer to an array of a string
 * @action: A pointer to the function needed to be used
 * Description: This function takes a pointer to an array of integers
 * the size returns void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t j;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (j = 0; j < size; j++)
		{
			action(array[j]);
		}
	}
	exit(0);
}
