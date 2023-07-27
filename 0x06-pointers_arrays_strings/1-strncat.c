#include "main.h"
#include <string.h>

/**
 * _strncat - a function that concatenates two strings
 * @dest: an input string
 * @src: an input string
 * @n: an input string
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
