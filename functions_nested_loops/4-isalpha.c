#include "main.h"
/**
 * _isalpha - checks for type of characte is letter, upper or lowecase
 * @c:check character
 *
 * Return: 1 value if character a letter, uppercase or lowercase, 0 otherwise.
 *
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
