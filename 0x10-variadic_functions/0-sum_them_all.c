#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - A function that sums all its parameters
 * @n: a number of parameters
 * @...: other parameters
 * Return: The sum of all parameters, or zero if n is zero
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list par;
	unsigned int i, sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(par, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(par, int);
	}
	va_end(par);
	return (sum);
}
