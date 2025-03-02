#include "main.h"
/**
 * _atoi - Convert string to an integer
 * @s: check characters
 * Return: Integer with sign
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int num = 0;
	int digit;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > 9))
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] - '0' && s[i] <= '9')
	{
		digit = s[i] - '0';
		if (num > 214748364 || (num == 214748364 && digit > 7))
		{
			if (sign == 1)
				return (2147483647);
			else
				return (-2147483648);
		}
		num = num * 10 + digit;
		i++;
	}
	return (num * sign);
}
