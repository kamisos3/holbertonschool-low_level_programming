#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - Calculator that uses functiion pointers
 * @argc: counts arguments
 * @argv: argument vector
 *
 * Return: 0
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
	printf("%d\n", op_func(a, b));
	return (0);
}
