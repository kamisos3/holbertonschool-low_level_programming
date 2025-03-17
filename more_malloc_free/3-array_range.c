#include "main.h"
#include <stdlib.h>
/**
 * array_range - points to newly created array
 * @min:smallest int
 * @max:largest int
 *
 * Return:Pointer to newly created array
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;
	int j = 0;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		arr[j] = i;
		j++;
	}
	return (arr);
}
