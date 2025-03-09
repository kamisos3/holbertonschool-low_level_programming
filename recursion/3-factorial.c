#include "main.h"
/**
 * factorial - Returns the factorial of a given number
 * @n: The number whose factorial is to be calculated
 *
 * Return: Factorial of n, or -1 if n is lower than 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
