#include <stddef.h>
#include "main.h"
/**
 * _strchr - locates characters in string
 * @s: points to string
 * @c: locates string
 *
 * Return: First character string occurrency, NULL if not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
