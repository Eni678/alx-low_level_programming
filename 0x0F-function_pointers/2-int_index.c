#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - a function that searches for an integer
 * @array: a pointer to array of integers
 * @size: size of the array
 * @cmp: a pointer to the comparison function for the integer values
 * Return: index for the first element for which
 * the comparison function
 * Description: This function takes a pointer to an array of integers, the size
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
