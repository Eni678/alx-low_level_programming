#include "lists.h"
#include <stdio.h>

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: A pointer to a pointer to the head of the list
 *
 * Return: The data (n) of hte deleted head node,
 * or 0 if the the list is empty
 */
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	data = (*head)->n;

	temp = (*head)->next;

	free(*head);

	*head = temp;

	return (data);
}
