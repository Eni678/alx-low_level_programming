#include "lists.h"
#include <stddef.h>

/**
 * list_len - This function returns the number of elements
 * in a linked list_t list.
 * @h: A pointer to the head of the list.
 *
 * Return: The number of elements in the list.
 */
size_t list_len(const list_t *h)
{
	const list_t *arr;
	size_t len = 0;

	for (arr = h; arr != NULL; arr = arr->next)
	{
		len++;
	}

	return (len);
}
