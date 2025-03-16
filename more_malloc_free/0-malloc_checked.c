#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Allocating memory with malloc, if fails exit with 98
 * @b: is pointed to allocate memory here
 *
 *
 * Return: Allocated memory ppointer, if fails 98
 *
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
