#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ln;

	for (ln = 'a'; ln >= 'z'; ln++)
		putchar(ln);

	putchar('\n');

	return (0);
}
