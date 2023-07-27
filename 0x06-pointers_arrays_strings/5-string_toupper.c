#include "main.h"
#include <ctype.h>

/**
 * string_toupper - a function that changes all lowercase letters
 * string to uppercase
 *
 * @s: an input string
 * Return: char pointer to  converted string
 */
char *string_toupper(char *s)
{
	char *start = s;

	while (*s)
	{
		*s = toupper(*s);
		s++;
	}

	return (start);
}
