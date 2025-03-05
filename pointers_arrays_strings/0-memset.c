#include "main.h"
/**
 * _memset - Fills memory with constant byte
 * @s: points to memory
 * @b: constant byte
 * @n: number of bytes
 * Return: Pointer to the memory of s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
