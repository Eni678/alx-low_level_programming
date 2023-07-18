#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all natural number from n to 98
 * @n: Starting number
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n < 98; n++)
		{
			printf("%d ", n);
			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d, ", n);
			if (n == 98)
				continue;
			printf(", ");
		}
	}
	printf("\n");
}
