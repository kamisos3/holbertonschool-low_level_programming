#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint - Frees list memory space
 * @head: points to the head of the list
 *
 * Return: Freed memory
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *store;

	while (head != NULL)
	{
		store = head->next;
		free(head);
		head = store;
	}
}
