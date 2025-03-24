#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - Prints any type of argument
 * @format: list of all types of arguments passed to function
 * Return: Type of argument
 */
void print_all(const char * const format, ...)
{
	va_list args;/*Variables argument list*/
	int i = 0;
	char *str, *separator = "";

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c': /*If its character*/
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':/*For float*/
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':/*For strings*/
				str = va_arg(args, char *);
				if (!str)
				{
					str = "(nil)";
				}
				printf("%s%s", separator, str);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(args);
}
