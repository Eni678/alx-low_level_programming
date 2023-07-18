#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - this function prints ten times the alphabet
 *
 * main - Entry poin
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i <= 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
