#include "main.h"
#include <string.h>

/**
 * _strncpy - copies a string
 *
 * @dest: an input pointer
 * @src: an inputed pointer to the source string
 * @n: number of characters to copy from the pointer src
 * Return: Pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
