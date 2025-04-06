#include <stdio.h>
#include "lists.h"
/**
* add_dnodeint_end - Addd a new node a the end of doubly linked list
* @head: points to head
* @n: number to be saved in memory
*
* Return: New elements address; NULL if fails
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *traverse = *head;

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
{
		traverse = *head;

		while (traverse->next != NULL)
		{
			traverse = traverse->next;
		}
		new_node->prev = traverse;
		traverse->next = new_node;
	}
	return (new_node);
}
