#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_list - This function prints all elements of a list_t list
 * @h: pointer to the head of the list
 * Return: The total number of nodes printed.
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}

		h = h->next;
		count++;
	}
	return (count);
}
