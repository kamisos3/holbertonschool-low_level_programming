#include <stdio.h>
#include "lists.h"
/**
 * sum_dlistint - Returns sum of all data in doubly linked list
 * @head: Pointer to head of doubly linked list
 *
 * Return: Sum of all data
 *
 */
int sum_dlistint(dlistint_t *head)
{
	unsigned int num = 0;

	while (head != NULL)
	{
		num += head->n;
		head = head->next;
	}
	return (num);
}
