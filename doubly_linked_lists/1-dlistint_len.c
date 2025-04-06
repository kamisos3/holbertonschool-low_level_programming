#include <stdio.h>
#include "lists.h"
/**
*  dlistint_len - Prints number of elements in doubly linked list
*  @h: Pointer to the head of the list
*
* Return: Number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		num++;/*Gives count*/
		h = h->next; /*Moves to the next node*/
	}
	return (num);
}
