#include "main.h"
/**
 * _memcpy - Copies memory area
 * @dest: ponints destination
 * @src: points memory source
 * @n: byte number to copy
 * Return: Pointer to memory area dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
