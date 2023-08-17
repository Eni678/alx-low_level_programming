#include "stdarg.h"
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - A function that prints anything
 * @format: a list of type of arguments passed to the function
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list ar;
	char *temp;
	int i = 0;

	va_start(ar, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", (char) va_arg(ar, int));
				break;
			case 'i':
				printf("%d", va_arg(ar, int));
				break;
			case 'f':
				printf("%f", (float) va_arg(ar, double));
				break;
			case 's':
				temp = va_arg(ar, char *);
				if (temp != NULL)
				{
					printf("%s", temp);
					break;
				}
				printf("(nil)");
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f'
					|| format[i] == 's') && format[(i + 1)] != '\0')
			printf(", ");
		i++;
	}
	va_end(ar);
	printf("\n");
}
