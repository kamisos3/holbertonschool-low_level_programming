#include "main.h"
/**
 * puts2 - prints every 2 characters
 * @str: check characters
 * Return: String
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if  (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
