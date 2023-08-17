#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - A function that prints numbers followed by a new line
 * @separator: An input string to be printed between numbers
 * @n: number of parameters
 * @...: other parameters
 * Return: the parameters
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ar;
	unsigned int i = 0;
	int num;

	va_start(ar, n);
	for (; i < n; i++)
	{
		num = va_arg(ar, int);
		printf("%d", num);
		if (separator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ar);
}
