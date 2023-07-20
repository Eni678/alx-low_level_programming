#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0
 *
 * Description: The function uses a brute force approach to find the largest
 */
int main(void)
{
	unsigned long int i = 3, n = 612852475143;

	for (; i < 12057; i += 2)
	{
		while (n % i == 0 && n != i)
			n /= i;
	}
	printf("%lu\n", n);
	return (0);
}
