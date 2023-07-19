#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
<<<<<<< HEAD
 * main- Entry point
=======
 * main- Entry Point
>>>>>>> 8532723fca23d67ce0b1cd6db8dd2240d7ce9952
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
