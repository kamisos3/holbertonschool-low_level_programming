#include "main.h"
/**
 * print_diagonal - prints characters diagonally
 * @n: check character
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < 0; i++)
	{
		for (j = 0; i < j; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
