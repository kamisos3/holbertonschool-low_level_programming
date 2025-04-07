#include <stdio.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - Returns index (Nth) of doubly linked list
 * @head: pointer to head of doubly list
 * @index: Return node to this index
 *
 * Return: Node at the index (Nth)
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int count = 0;

	while (temp != NULL)
	{
		if (count == index)
		{
			return (temp);
		}
		temp = temp->next;
		count++;
	}
	return (NULL);
}
