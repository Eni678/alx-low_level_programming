#include <stdio.h>
#include "main.h"

/**
 *  _islower- this fuction checks for lowercase characters
 *  This function prints all lowercase letters except.
 *  main - Entry point
 *
 * parameters - integer
 * @c: the character to check
 * Return: 1 (successful), 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
