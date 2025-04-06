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
		count++;

		h = h->next;
	}
	return (count);
}
