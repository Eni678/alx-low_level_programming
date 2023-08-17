#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - A function that prints strings followed by a new line
 * @separator: An input string to be printed between numbers
 * @n: number of parameters
 * @...: other parameters
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ar;
	unsigned int i = 0;
	char *string;

	va_start(ar, n);
	for (; i < n; i++)
	{
		string = va_arg(ar, char *);
		if  (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if (separator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ar);
}
