#include "main.h"
#include <string.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to be searched.
 * @accept: The set of bytes to be earched for.
 *
 * Return: If a set is matched - a pointer to the matched byte.
 * or null if no set is matched
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		if (strchr(accept, *s))
			return (s);
		s++;
	}
	return (NULL);
}
