#include <stddef.h>
#include "lists.h"
/**
* list_len - Returns number of elements in linked list_t
* @h: points to the head of the list
*
*
* Return: Number of elements in list_t
*
*/
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;/*Counts elements in list_t*/

		h = h->next;/*Moves to the next node with the data*/
	}
	return (count);/*Retur how many elements are in list_t*/
}
