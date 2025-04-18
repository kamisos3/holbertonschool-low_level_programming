#include <stdio.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts node to a given position
 * @h: Pointer to head of doubly linked list
 * @idx: Index where node goes
 * @n: value to store in new node
 *
 * Return: Address of new node; NULL if fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int count = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *h;
		if (*h)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	temp = *h;
	while (temp && count < idx - 1)
	{
		temp = temp->next;
		count++;
	}
	if (!temp)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = temp->next;
	new_node->prev = temp;

	if (temp->next)
		temp->next->prev = new_node;

	temp->next = new_node;

		return (new_node);
}
