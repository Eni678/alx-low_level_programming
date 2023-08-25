#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_list - This function prints all elements of a list_t list
 * @h: pointer to the head of the list
 * Return: If str is Null, print 0.
 */

size_t print_list(const list_t *h)
{
	unsigned int  count = 0;

	while (h)
	{
		printf("[%u] ", h->len);
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("%s\n", h->str);
		}

		h = h->next;
		count++;
	}
	return (count);
}
