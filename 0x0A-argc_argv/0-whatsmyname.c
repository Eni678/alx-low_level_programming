#include <stdio.h>

/**
 * main - a program that prints its name followed
 * by a new line
 * @argc: an argument counter
 * @argv: an argument value, a string that comes after calling function
 * Return: Always 0 (successful)
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
