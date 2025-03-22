#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - looks for integer match
 * @size: number of elements in array
 * @cmp: function pointer to compare values
 * @array: multiple elements to be searched
 *
 * Return: If theres a match 1, if its 0 or has no match -1 and 0 if its NULL
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);/*Invalid inputs*/
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)/*Searches for match*/
			return (i);/*Returns index of the first element*/
	}
	return (-1); /*No match was found*/
}
