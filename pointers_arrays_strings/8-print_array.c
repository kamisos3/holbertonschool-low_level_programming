#include <stdio.h>
#include "main.h"
/**
 * print_array - Print array elements
 * @a: check character
 * @n: check character
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; ++i)
	{
		printf("%d\n", a[i]);
	}
}
