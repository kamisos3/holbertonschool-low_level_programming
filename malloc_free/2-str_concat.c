#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * str_concat - Concatenates 2 strings
 * @s1: first content in allocated memory
 * @s2: second content in allocated memory
 *
 * Return: Newly allocated memory, if it fails NULL
 *
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	size_t len1 = 0, len2 = 0, i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	/*Si s2 da NULL, esta vacio*/
	if (s2 == NULL)
	{
		s2 = "";
	}
	/*Calcula el size de 2 strings*/
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}

	/*Allocate memmory from new concatenated string,sumar +1 para NULL*/
	concat_str = malloc(len1 + len2 + 1);
	if (concat_str == NULL)
	{
		return (NULL);
	}

	/*Copia nuevo contenido de s2 al concatenated string*/
	for (i = 0; i < len1; i++)
	{
		concat_str[i] = s1[i];
	}
	for (j = 0; j < len2; j++, i++)
	{
		concat_str[i] = s2[j];
	}
	concat_str[i] = '\0'; /*Termina el concatenated string*/
	return (concat_str);
}
