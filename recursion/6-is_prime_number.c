#include "main.h"
/**
 * check_prime - Helper function to check for factors
 * @n: The number to be checked
 * @div: The current divisor to check against n
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */
int check_prime(int n, int div)
{
	if (div * div > n)
	{
		return (1);
	}
	if (n % div == 0)
	{
		return (0);
	}
	return (check_prime(n, div + 1));
}
/**
 * is_prime_number - Checks if a number is a prime number
 * @n: The number to be checked
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (check_prime(n, 2));
}
