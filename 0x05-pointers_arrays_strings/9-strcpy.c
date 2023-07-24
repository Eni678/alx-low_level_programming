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
	char *aux = dest;

	while (*src)
		*dest++ = *src++;
	return (aux);
}
