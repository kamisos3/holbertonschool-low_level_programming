#include "main.h"
#include <stddef.h>
#include <string.h>
/**
 * _strncat -Concatenates two strings with byte limit
 * @dest: string destination
 * @src: string source
 * @n: Maximum # of bytes
 * Return: Pointer to the result string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *original_dest = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';

	return (original_dest);
}
