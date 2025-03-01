#include "main.h"
/**
 * swap_int - Swap value of two intengersa
 * @a: verify character
 * @b: verify character
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
