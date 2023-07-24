#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies a string poiinted to by src,
 * including the terminating null byte(\0),
 * to the buffer pointed to by dest
 * @dest: The pointer to destination of the string
 * @src: The string to copy
 *
 * Return: A pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
