#include "main.h"

/**
 * wildcmp - A function that compares two strings
 * @s1: first inputed string
 * @s2: second input string
 * Return: If string is identical it returns 1 or 0 if otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (!*s1 && !*s2)
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*' && *(s1 + 1) && *s2)
		return (0);
	return (0);
}
