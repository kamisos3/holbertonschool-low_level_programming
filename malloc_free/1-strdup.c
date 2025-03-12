#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - return pointer to new allocated memory
 * @str: were _strdup is saved
 *
 *
 * Return: Pointer to new string, or that string is NULL
 */
char *_strdup(char *str)
{
	char *dup_str;
	int len = 0;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	/*Calcula el largo del string manualmente*/
	while (str[len] != '\0')
	{
		len++;
	}
	dup_str = malloc(len + 1);
	if (dup_str == NULL)
	{
		return (NULL); /*Si, allocation falla returns NULL*/
	}
	/*Copia el string al allocated memory manualmente*/
	for (i = 0; i <= len; i++)
	{
		dup_str[i] = str[i];
	}
	return (dup_str);
}
