#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates a char array
 * @size: size of array
 * @c: char to initialize array
 *
 * Return: pointer to array, NULL if is 0
 */
char *create_array(unsigned int size, char c)
{
	char *array = malloc(size * sizeof(char));
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
