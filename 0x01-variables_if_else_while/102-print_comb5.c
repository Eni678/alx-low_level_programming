#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int k, l;

	for (k = '0'; k <= 98; k++)
	{
		for (l = k + 1; l <= 99; l++)
		{
			if (k != l)
			{
				putchar((k / 10) + '0');
				putchar((k % 10) + '0');
				putchar(' ');
				putchar((l / 10) + '0');
				putchar((l % 10) + '0');
				if (k != 98 || l != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
