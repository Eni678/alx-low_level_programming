#include "main.h"
#include <stdio.h>

/**
 * rot13-  a function that encodes a string using rot13.
 * @s: String to be encoded
 * Return: Pointer to the encoded string
 */
char *rot13(char *s)
{
	char *ptr = s;

	while (*s)
	{
		char base = (*s >= 'a' && *s <= 'z') ? 'a' : 'A';

		if ((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z'))
		{
			*s = (char)(((int)(*s - base) + 13) % 26) + base;
		}
		s++;
	}

	return (ptr);
}

