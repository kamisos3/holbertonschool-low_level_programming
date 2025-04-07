#include <stdio.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes node at index of doubly list
 * @head: pointer to head of doubly list
 * @index: where node to delete is stored
 *
 * Return: 1 if success; -1 if fails
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int counter = 0;

	if (*head == NULL)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	while (temp != NULL && counter < index)
	{
		temp = temp->next;
		counter++;
	}

	if (temp == NULL)
		return (-1);

	if (temp->next != NULL)
		temp->next->prev = temp->prev;
	if (temp->prev != NULL)
		temp->prev->next = temp->next;

	free(temp);
	return (1);
}
