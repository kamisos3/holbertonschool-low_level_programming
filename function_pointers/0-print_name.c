#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints name using function pointer
 * @f: function pointer
 * @name: person's name
 *
 * Return: Print name thats been inputed
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)

		return; /*Works with invalid inout*/
	f(name);/*Calls the function to the pointer and printst the name*/
}
