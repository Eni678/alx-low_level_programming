#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number to an
 * unsigned int
 * @b: A pointer to a string
 * Return: The converted number or 0 if there is one
 * or more chars in the string b that is not 0 and 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		result = (result << 1) + (*b - '0');
		b++;
	}
	return (result);
}
