#include "main.h"

/**
 * _puts_recursion - this function prints a string followed by a new line
 *
 * @s: an input string to be printed
 *
 * Return: Null
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
