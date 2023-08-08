#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars, and
 * initializes it with a specific char
 * @size: a size of the array
 * @c: a character to initialize the array
 *
 * Return: a pointer to the array, NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *s;

	s = size == 0 ? NULL : malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
