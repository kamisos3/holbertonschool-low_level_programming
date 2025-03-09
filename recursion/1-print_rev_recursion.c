#include <stdio.h>
/**
 * _print_rev_recursion-Printing a string in reverse with rec
 * ursion
 * @s:character string
 * Return:Reverse string
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
