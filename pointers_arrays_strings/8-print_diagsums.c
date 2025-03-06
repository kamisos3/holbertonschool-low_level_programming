#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - Prints the sum of the two diagonals
 * @size: memory storage
 * @a: pointer
 * Return: Sum of two diagonals
 *
 */
void print_diagsums(int *a, int size)
{
	int primary_sum = 0;
	int secondary_sum = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		primary_sum += *(a + i * size + i);
		secondary_sum += *(a + i * size + (size - 1 - i));
	}
	printf("%d, %d\n", primary_sum, secondary_sum);
}
