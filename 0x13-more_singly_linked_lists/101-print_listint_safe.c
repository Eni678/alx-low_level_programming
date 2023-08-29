#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: A pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tortoise = head, *hare = head;
	size_t node_count = 0;

	if (head == NULL)
		exit(98);
	while (tortoise && hare && hare->next && head)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;

		if (tortoise == hare)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			exit(98);
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		node_count++;
	}
	head = NULL;
	return (node_count);
}
