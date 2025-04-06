#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
* add_node - adds new node at the beggining of list_t
* @str: string
* @head: pointer to pointer h, thats head of list
*
* Return: Address of new element; NULL if fails
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;/*Creates new node*/

	new_node = malloc(sizeof(list_t));
	/*Allocates with malloc new memory space in new_node*/
	if (new_node == NULL)/*Verifies if the new node is null*/

		return (NULL);

	new_node->str = strdup(str);/*Returns pointer to new duplicate string*/
	if (new_node->str == NULL)/*Verify if string is null*/
	{
		free(new_node);/*Frees nodes memory*/
		return (NULL);
	}
	new_node->next = *head;
	/*Connects new node existing list, goes to what head is pointing*/
	*head = new_node;/*Goes to the beggining of the head of our list*/

	return (new_node);
}
