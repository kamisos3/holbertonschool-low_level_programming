#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
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

	if (str == NULL)
	{
		return (NULL);
	}
	dup_str = malloc(strlen(str) + 1);
	if (dup_str == NULL)
	{
		return (NULL);
	}
	strcpy(dup_str, str);
	return (dup_str);
}
