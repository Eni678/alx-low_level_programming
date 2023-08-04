#include "main.h"

/**
 * _puts - a function that prints a string, followed by a new line, to stdout
 * @str: a pointer to a string to be printed
 *
 * This function takes a pointer to a string and uses a loop to iterate over
 */
void _puts(char *str)
{
	int i = 0;


	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
