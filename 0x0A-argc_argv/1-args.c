#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it.
 * @argc: an argument count
 * @argv: an argument values
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	if (argv[0])
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
