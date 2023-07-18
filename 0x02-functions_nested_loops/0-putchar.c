#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char *str = "_putchar";
	int i = 0;

	while (i < 8)
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
