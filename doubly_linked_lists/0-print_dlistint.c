#include <stdio.h>
#include "lists.h"
/**
* print_dlistint - Prints every element in print_dlistint
* @h: points to the head of doubly linked lists
*
* Return: Number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;

	while (h != 0)
	{
		printf("%d\n", h->n);
		/*Prints the number accesing list through n*/
		num++;/*Increments to count*/
		h = h->next;
	}
	return (num);
}
