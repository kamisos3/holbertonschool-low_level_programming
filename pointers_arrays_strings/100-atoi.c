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
	int found_number = 0;


	while (s[i] == ' ')
	{
		i++;
	}

	while (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		num = num  * 10 + (s[i] - '0');
		found_number = 1;
		i++;
	}
	if (!found_number)
	{
		return (0);
	}

	return (num * sign);
}
