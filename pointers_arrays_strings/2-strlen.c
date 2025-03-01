#include "main.h"
/**
 * _strlen - Check string lenght
 * @s: check character
 * Return: string leght
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
