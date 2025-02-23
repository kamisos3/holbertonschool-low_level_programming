#include <stdio.h>
/**
 * main-Excluding letters from printing
 * Return: Always 0
 */
int main(void)
{
	char letters = 97;


	while (letters < 123)
	{
		if (letters != 101 && letters != 113)
		{
			putchar(letters);
		}
		letters++;
	}
	putchar('\n');
	return (0);
}
