#include <stdio.h>

/**
 *_abs-absolute value of intenger
 *@r:Intenger to compute absolute value 
 * Return: 
 * Always 0.
 *
 * Return: Absoulte value of r.
 */
int _abs(int r)
{
	if (r < 0)
	{
		return (-r);
	}
	return (r);
}
