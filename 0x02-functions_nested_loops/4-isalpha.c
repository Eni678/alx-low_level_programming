#include <stdio.h>
#include "main.h"

/**
 * _isalpha - this function prints uppercase characters
 * @c: An input character
 * letter, lowercase or uppercase
 * Return: 1 (success), otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 120))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
