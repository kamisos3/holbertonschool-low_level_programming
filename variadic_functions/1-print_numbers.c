#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - Prints numbers with new line
 * @separator: string to print between numbers
 * @n: number of integers
 *
 * Return: Separator, NULL if its invalid
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	/*Initialize args, points to the first var agrgument*/
	va_start(args, n);

	/*Iterate number of arguments*/
	for (i = 0; i < n; i++)
	{
		printf("%d\n", va_arg(args, int));

		/*Print separator if valid and not at the last number*/
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	/*Clean list*/
	printf("\n");
}
