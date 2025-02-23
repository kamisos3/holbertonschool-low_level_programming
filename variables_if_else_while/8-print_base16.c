#include <stdio.h>
/**
 * main - Hexadecimals
 * Return:
 * Always (0)
 */

int main(void)
{
	int c = 48;
	int b = 97;

	while (c <= 57)
	{
		putchar(c);
		c++;
	}
	while (b <= 102)
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
