#include <stddef.h>
#include "main.h"
/**
 * _strstr - Locates substring
 * @haystack:check string
 * @needle:check substring
 * Return:Pointer to the beginning  of substring; NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	if (*n == '\0')
	{
		return (h);
	}
	while (*h)
	{
		char *start = h;

		n = needle;
		while (*h && *n && (*h == *n))
		{
			h++;
			n++;
		}
		if (!*n)
		{
			return (start);
		}
		h = start;
	}
	return (NULL);
}
