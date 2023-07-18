#include <stdio.h>
#include "main.h"

/*
 * write a function that prints the alphabet.
 */
/**
 * print_alphabet - function prints letters
 * main - Entry point
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
		_putchar('\n');
}
