#include "main.h"
#include <stdio.h>

/**
 * rot13-  a function that encodes a string using rot13.
 * @s: String to be encoded
 * Return: Pointer to the encoded string
 */
char *rot13(char *s)
{
	int i;
	int j;
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13_alphabet[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == alphabet[j])
			{
				s[i] = rot13_alphabet[j];
				break;
			}
		}
	}
	return (s);
}
