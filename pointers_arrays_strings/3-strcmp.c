#include "main.h"
#include <stdio.h>
/**
 * _strcmp - Compares two strings
 * @s1: check character
 * @s2: check character
 * Return: characters
 */
int _strcmp(char *s1, char *s2)
{
	while (*s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

