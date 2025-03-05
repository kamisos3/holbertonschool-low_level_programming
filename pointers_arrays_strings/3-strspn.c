#include "main.h"
/**
 * _strspn - lenght of a prefix substring
 * @s: check string
 * @accept: string containing the matching characters
 *
 * Return: Number of only bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *ptr;

	while (*s)
	{
		for (ptr = accept; *ptr)
		{
			ptr++;
			if (*s == *ptr)
			{
				count++;
				break;
			}
		}
		if (!*ptr)
		{ break;
		}
		s++;
	}
	return (count);
}
