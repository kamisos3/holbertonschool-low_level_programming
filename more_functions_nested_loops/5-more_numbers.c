#include "main.h"

/**
 * more_numbers - print more numbers
 *
 */
void more_numbers(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			if (b > 9)
			{
				_putchar((b / 10) + '0');
				_putchar((b % 10) + '0');
			}
			else
				_putchar(b + '0');
			_putchar('\n');
		}
	}
}
