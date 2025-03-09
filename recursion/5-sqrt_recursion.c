#include "main.h"
/**
 * sqrt_helper - A helper function to find the natural square root
 * @n: The number to find the square root of
 * @guess: The current guess for the square root
 *
 * Return: The natural square root or -1 if not found
 */
int sqrt_helper(int n, int guess)
{
	if (guess * guess > n)
	{
		return (-1);
	}
	else if (guess * guess == n)
	{
		return (guess);
	}
	else
	{
		return (sqrt_helper(n, guess + 1));
	}
}
/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number for which to calculate the square root
 *
 * Return:The natural square root of n, or -1 if n has no natural square root
 */
int _sqrt_recursion(int n)
{
	return (sqrt_helper(n, 0));
}
