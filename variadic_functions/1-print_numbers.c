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
	unsigned int i;
	va_list args;
	va_start(args, n);

	/*Iterate number of arguments*/
	for (i = 0; i < n; i++)
	{
		int num = va_arg(args, int);
		printf("%d", num);
		/*Print separator if valid and not at the last number*/
		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}

	/*Clean list*/
	va_end(args);
	printf("\n");
}
