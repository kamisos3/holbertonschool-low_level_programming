#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - Prints string and new line
 * @n: number of strings
 * @separator: string
 *
 * Return: Separator and NULL if one of the strings or separator is NULL.
 */
void print_strings(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	/*Initializes*/
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		const char *str = va_arg(args, const char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
