#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
* add_node_end - Adds a node to the end of list_t
* @str: string
* @head: points to head of the list
*
*
* Return: Address of new element; NULL if fails
*/
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int lenght = 0;
	/*Allocates new node memory*/
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);/*If memory allocation fails*/
	}
	new_node->str = strdup(str);/*Initializes new node and moves next*/
	/*If the list is empty, new_node is set as head*/
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (str[lenght] != '\0')
	{
		lenght++;
	}
	new_node->len = lenght;/*Gets lenght of string*/

	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
{

		list_t *temp = *head;/*Traverses to last node*/

		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;/*Sets lasts node next pointer to new_node*/
	}
	return (new_node);
}
