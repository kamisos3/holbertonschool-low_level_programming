#include "main.h"
/**
 * _puts - Prints a string of characters
 * @str: check characters
 * Return: String of characters
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
