#include "main.h"
/**
 * print_triangle - print character like a triangle
 * @size: triangle size
 *
 */
void print_triangle(int size)
{
	int row, space, block;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (row = 1; row <= size; row++)
	{
		for (space = 0; space < size - row; space++)
		{
			_putchar(' ');
		}
		for (block = 0; block < row; block++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
