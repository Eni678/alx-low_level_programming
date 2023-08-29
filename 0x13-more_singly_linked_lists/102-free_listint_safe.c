#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * free_listint_safe - Frees a listint_t linked list safely.
 * @h: A pointer to a pointer to the head of the kist.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t counter = 0;
	listint_t *current = *h, *temp;

	while (current)
	{
		if (current->next == *h)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			free(current);
			break;
		}
		temp = current;
		current = current->next;

		printf("[%p] %d\n", (void *)temp, temp->n);

		free(temp);
		counter++;
	}

	*h = NULL;
	return (counter);
}
