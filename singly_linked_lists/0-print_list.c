#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
* print_list - Prints elemnts counted
* @h: pointer to the lists head
*
* Return: Number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t count = 0;/*Used to store nodes, size_t*/

	while (h != NULL)
	{
		if (h->str == NULL)

			printf("[0] (nil)\n");
		else

			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		count++;/*Increments to give count*/
	}
	return (count);/*Returns counted nodes*/
}
