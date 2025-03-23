#include <stdio.h>
#include "3-calc.h"
/**
 * get_op_func - Selects operation
 * @s: string
 *
 *
 * Return: Corresponding operator or NULL if its invalid
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (ops[i].op != NULL)/*Verify if string matches operator*/
	{
		if (*(ops[i].op) == *s && s[1] == '\0')/*Compares strings*/

			return (ops[i].f);/*Returns the corresponding operator function*/
		i++;
	}
	return (NULL);/*If theres not match*/
}
