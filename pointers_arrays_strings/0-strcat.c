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

	char *result = malloc(strlen(dest) + strlen(src) + 1);

	strcpy(result, dest);
	strcat(result, src);
	return (result);
}
