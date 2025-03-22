#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - access elements size as hexidecimal
 * @array: where de sizes are
 * @size: arrays size
 * @action: function pointer
 *
 * Return: Elements sizes
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)

		return; /*For invalid input*/

	for (i = 0; i < size; i++)/*Access size and increments*/
	{
		action(array[i]); /*Calling callback function*/
	}
}
