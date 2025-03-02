#include "main.h"
/**
 * _atoi - Convert string to an integer
 * @s: check characters
 * Return: Integer with sign
 */
int _atoi(char *s)
{
	int num = 0;
	int i = 0;
	int sign = 1;


	while (s[i] != '+' || s[i] == '-')
	{
		i++;
	}

	if (s[i] == '-' || s[i] == '+')
	{
		sign = (s[i] == '-') ? -1 : 1;
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		num = num  * 10 + (s[i] - '0');
		i++;
	}

	return (num * sign);
}
