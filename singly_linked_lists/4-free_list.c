#include <stdlib.h>
#include "lists.h"
/**
* free_list - Frees list_t memory
* @head: Pointer to head of list_t
*
* Return: Freed memory
*/
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
