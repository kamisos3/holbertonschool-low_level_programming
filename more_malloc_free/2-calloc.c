#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory array with malloc
 * @nmemb:amount of elements
 * @size:size of element
 *
 * Return: If nmemb is 0 return NULL, if malloc fails return NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *one;

	if (nmemb == 0 || size == 0)
		return (NULL);

	one = malloc(size * nmemb);

	if (one == NULL)
		return (NULL);

	for (i = 0; i < (size * nmemb); i++)
	{
		one[i] = 0;
	}

	return (one);
}
