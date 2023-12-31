#include "main.h"
int _sqrt(int prev, int root);

/**
 * _sqrt_recursion -  Write a function that returns the natural
 * square root of a number..
 * @n: The number to be square rooted
 * Return: The square root of n, or - if n is negative
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt(1, n));
}
/**
 * _sqrt - find the square root
 * @prev: previous value
 * @root: square root value
 * Return: the square root
 */
int _sqrt(int prev, int root)
{
	if (prev > root)
		return (-1);
	else if (prev * prev == root)
		return (prev);
	return (_sqrt(prev + 1, root));
}
