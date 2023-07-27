#include "main.h"

/**
 * cap_string - Captalizes all words in a string
 * @str: A pointer to the string to be modified
 * Return: Pointer to the modified string
 */

char *cap_string(char *str)
{
	int a = 1;

	while (str[a] != '\0')
	{
		if ((str[a - 1] == ' ' || str[a - 1] == '\t' || str[a - 1] == '\n' ||
					str[a - 1] == ',' || str[a - 1] == ';' || str[a - 1] == '.' ||
					str[a - 1] == '!' || str[a - 1] == '?' || str[a - 1] == '"' ||
					str[a - 1] == '(' || str[a - 1] == ')' || str[a - 1] == '{' ||
					str[a - 1] == '}') && (str[a] >= 'a' && str[a] <= 'z'))
		{
			str[a] = str[a] - 32;
		}
		a++;
	}
	return (str);
}
