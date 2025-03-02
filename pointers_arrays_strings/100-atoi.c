#include "main.h"
#include <stddef.h>
#include <limits.h>
/**
 * _atoi - Convert string to an integer
 * @s: check characters
 * Return: Integer with sign
 */
int _atoi(char *s)
{
	int digit = 0;
	int i = 0;
	int sign = 1;
	int result = 0;

		if (s == NULL)
		{
			return (0);
		}

	while (s[i] && (s[i] < '0' || s[i] > '9') && (s[i] != '-' && s[i] != '+'))
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
		digit = s[i] - '0';

		if (result > (INT_MAX - digit) / 10)
		{
			return (sign == 1);
		}

		result = result * 10 + digit;
		i++;
	}

	return (sign * result);
}
