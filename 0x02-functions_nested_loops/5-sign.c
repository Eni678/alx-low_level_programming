#include <stdio.h>
#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: input number
 * Return: 1 if number is positive, 0 if number is equal to 0
 * -1 if number is negative
 */
int print_sign(int n)
{
	int value;

	if (n > 0)
	{
		value = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		value = 0;
		_putchar('0');
	}
	else
	{
		value = -1;
		_putchar('_');
	}

	return (value);
}
