#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strcat - Concatenating two strings
 * @dest: string one
 * @src: string two
 * Return: Result
 *
 */
char *_strcat(char *dest, char *src)
{
	char *original_dest = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (original_dest);
}
