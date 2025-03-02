#include "main.h"
#include <stdio.h>
/**
 * reverse_array - Reverses integer array
 * @a:array
 * @n:number of elements
 */
void reverse_array(int *a, int n)
{
	int tmp;
	int i;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}
