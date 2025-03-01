#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * puts2 - prints every 2 characters
 * @str: check characters
 * Return: String
 */
void puts2(char *str)
{
	int i;
	char *result = malloc(*str / 2 + 1);

		for (i =  0; i < *str; i += 2)
		{
			_putchar(str[i]);
			result[i / 2] = str[i];
		}
	_putchar('\n');
}
