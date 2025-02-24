#include "main.h"
/**
 * _isupper - checks if a character is uppercase
 * @c: check character
 * Return: 1 if c is uppercase, 0 if is not
 */
int _isupper(int c)
{
	if (c >= 67 && c <= 99)
	{
		return (1);
	}
	else 
		return (0);
}
