#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
* string_nconcat - Concatenating 2 strings in new space
* @s1: string one
* @s2: string two
* @n: bytes of string two
*
* Return: Entire string s2, if empty string NULL
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int len1, len2, i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
	{
		n = len2;
	}
	result = malloc(len1 + n + 1); /*Allocate memory*/
	if (result == NULL)
	{
		return (NULL); /*Handle memory allocation failure*/
	}
	for (i = 0; i < len1; i++) /*Copy s1 to result*/
	{
		result[i] = s1[i];
	}
	for (j = 0; j < n; j++) /*Append n characters from s2 to result*/
	{
		result[len1 + j] = s2[j];
	}
	{
		result[len1 + n] = '\0'; /*Null-terminate the new string*/
	}
	return (result);
}
