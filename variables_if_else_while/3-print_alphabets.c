#include <stdio.h>
/**
 *main-Lower and uppercase alphabet
 * Return: Always 0
 */
int main(void)
{
	char letters = 97;
	char LETTERS =  65;

	while (letters < 97)
	{
		putchar(letters);
		letters++;
	}
	while (LETTERS < 65)
	{
		putchar(LETTERS);
		LETTERS++;
	}
	putchar('\n');
	return (0);
}
