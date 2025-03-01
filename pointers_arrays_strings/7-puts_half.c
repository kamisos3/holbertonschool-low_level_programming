#include "main.h"
/**
 * puts_half - Printing half the characters
 * @str: check characters
 */
void puts_half(char *str)
{
	str[5] = '\0';
	_putchar(*str);
	{
		_putchar('\n');
	}
}
