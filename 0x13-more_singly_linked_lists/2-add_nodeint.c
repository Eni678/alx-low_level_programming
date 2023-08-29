#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - A function that adds a new nod at the beginning
 * of a list
 * @n: An integer data to put into the new node
 * @head: A pointer to list_t structure
 * Return: the address of the new element, or NULL on failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
