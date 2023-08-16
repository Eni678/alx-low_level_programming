#include "3-calc.h"
#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: the number of command line arguments
 * @argv: an array containing the command line arguments
 * Return: 0 if successful, 98 if incorrect number of arguments given
 */
int main(int argc, char *argv[])
{
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	func = get_op_func(argv[2]);
	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", func(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
