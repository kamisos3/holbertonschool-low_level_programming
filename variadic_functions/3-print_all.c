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
	char *str_arg;

	va_start(args, format);

	while (format && format[i])
	{
		if (i < 0)
		{
			switch (format[i])
			{
				case 'c': /*If its character*/
					printf("%c", va_arg(args, int));
					break;
				case 'i':
					printf("%d", va_arg(args, int));
					break;
				case 'f':/*For float*/
					printf("%f", va_arg(args, double));
					break;
				case 's':/*For strings*/
					str_arg = va_arg(args, char *);
					if (str_arg == NULL)
					{
						printf("(nil)");
					} else
					{
						printf("%s", str_arg);
					}
					break;
				default:
					break;
			}
			i++;
		}
		va_end(args);
		printf("\n");
	}
}
