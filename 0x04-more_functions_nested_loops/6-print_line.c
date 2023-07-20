#include "main.h"

/**
 * print_line - this function that draws a straight in the terminal
 * @n: An integer
 * Return: Always 0
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
