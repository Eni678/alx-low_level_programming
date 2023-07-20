#include "main.h"

/**
 * _isupper - this function checks for uppercase characters
 * @c: the character to be checked
 *
 * Return: 1 if the character is uppercase or 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
