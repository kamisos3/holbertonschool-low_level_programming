#include "main.h"
/**
 * print_rev - Print string in reverse
 * @s: check character
 * Return: String in reverse
 *
 */
void print_rev(char *s)
{
	int len = 0;
	int i;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	s -= len;

	for (i = len - 1; i  >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
