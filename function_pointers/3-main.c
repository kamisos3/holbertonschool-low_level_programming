#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - Enters here
 * @argc: counts arguments
 * @argv: argument vector
 *
 * Return: 0 for success. 98 wrong number of arguments,
 * 99 invalid operator, 100 on divisions that are 0
 */
int main(int argc, char *argv[])
{
	int a, b;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	op_func = get_op_func(argv[2]);

	if (!op_func)
	{
		printf("Error\n");
		return (99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') &&
			b == 0)			{
		printf("Error\n");
		return (100);
	}
	printf("%d\n", op_func(a, b));
	return (0);
}
