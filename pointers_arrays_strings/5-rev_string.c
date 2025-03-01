#include "main.h"
/**
 * rev_string - Reverses string
 * @s: check character
 * Return: Reversed string
 */
void rev_string(char *s)
{
	char *start =  s;
	char *end = s;

	while (*end != '\0')
	{
		end++;
	}
	end--;
	while (start < end)
	{
		char temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
	}
}
