#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - A function that allocates memory using malloc
 * @b: An unsigned input integer
 * Return: A pointer to the allocated memory or returns NULL if it fails
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);

	if (s == 98)
		exit(98);
	return (s);
}
