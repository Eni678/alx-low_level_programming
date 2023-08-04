#include "main.h"

/**
 * _abs - this function prints the absolute value of an integer
 * @r: An integer input
 * Return: Absolute value of number r
 */
int _abs(int r)
{
	if (r >= 0)
		return (r);
	else
		return (r * -1);
}
