#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alx;

	for (alx = '0'; alx <= '9'; alx++)
	{
		putchar(alx);
	}

	for (alx = 'a'; alx <= 'f'; alx++)
	{
		putchar(alx);
	}

	putchar('\n');

	return (0);
}
