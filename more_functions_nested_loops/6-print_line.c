#include "main.h"
/**
 * print_line - print '_' if n is more than 0
 * @n: check character
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
