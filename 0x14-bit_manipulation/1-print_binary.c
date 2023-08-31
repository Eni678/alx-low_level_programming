#include <stdio.h>
#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to be converted and printed
 */
void print_binary(unsigned long int n)
{
	int shift = sizeof(unsigned long int) * 8 - 1;
	int flag;

	while (shift >= 0)
	{
		unsigned long int bit = (n >> shift) & 1;

		if (bit == 1)
		{
			flag = 1;
			putchar('1');
		}
		else if (flag == 1 || shift == 0)
		{
			putchar('0');
		}

		shift--;
	}
}
