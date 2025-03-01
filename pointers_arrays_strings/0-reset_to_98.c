#include <stdio.h>
#include "main.h"
/**
 * reset_to_98 - Dereferencing pointer value to 98
 * Return: 0
 */
void reset_to_98(int *n)
{
	*n = 0;

	printf ("Value of 'n': %d\n", *n);
	printf("Address of 'n': %p\n", (void *)n);
}

int main(void)
{
	int num = 0;
	printf("Original value: %d\n", num);
	reset_to_98(&num);
	printf("After function call: %d\n", num);
	return (0);
}
