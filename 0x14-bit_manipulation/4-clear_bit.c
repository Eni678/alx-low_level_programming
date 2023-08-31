#include <stdio.h>
#include "main.h"

/**
 * clear_bit - a function that sets th value of a bit to 0 at a given index
 * @n: A pointer to the unsigned long int where thr should be cleared
 * @index: The index of the bit to clear (starting frim 0)
 *
 * Return: 1 if it worked, or -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n = *n & ~(1ul << index);
	return (1);
}
