#include <stdio.h>
#include "main.h"

/**
 * factorial -  function that returns the factorial of a given number.
 * @n: The number factorial that is to be calculated
 *
 * Return: the factorial of n, if its -1 its an error
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
