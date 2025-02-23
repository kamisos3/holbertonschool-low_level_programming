#include <stdio.h>
/**
 * main - Reverse alphabet
 * Return: Always 0
 */
int main(void)
{
	char letters = 122;

	while (letters > 96)
	{
		putchar(letters);
		letters--;
	}
	putchar('\n');
	return (0);
}
