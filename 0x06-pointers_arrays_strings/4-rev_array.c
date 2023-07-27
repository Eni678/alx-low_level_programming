#include "main.h"

/**
 * reverse_array - a fuction that reverse the content of an array of integers
 * @a: an input string
 * @n: number of elements of the array
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int aux;

	while (i < n)
	{
		aux = a[i];
		a[i] = a[n - 1];
		a[n - 1] = aux;
		i++;
		n--;
	}
}
