#include <stddef.h>
#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: check string
 * @accept: string with bytes to match
 *
 * Return:Point to the first that matches one of the bytes; if not NULL
 */
char *_strpbrk(char *s, char *accept)
{
	char *ptr;

	while (*s)
	{
		for (ptr = accept; *ptr; ptr++)
		{
			if (*s == *ptr)
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
