#include <stdio.h>
/**
 * main-Printing lowercase alphabet
 * Return: Always 0
 */
int main(void)
{
	char letters = 97;

	while (letters < 128);
	{
		putchar(letters);
		letters++;
	}
	putchar('\n');
	return (0);
}
