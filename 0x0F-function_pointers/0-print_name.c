#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - a function that prints a name
 * @name: a pointer to a name
 * @f: a pointer to a function
 * Description: This function takes a pointer to a name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
