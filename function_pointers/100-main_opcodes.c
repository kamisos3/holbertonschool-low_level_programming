#include <stdio.h>
#include <stdlib.h>
/**
 * main - Is the entry point
 * @argc:argument count
 * @argv:string vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{

	int i;
	unsigned char *main_ptr =
		(unsigned char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}


	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", main_ptr[i]);
		if (i < num_bytes - 1)
		{

			printf(" ");
		}
	}
	printf("\n");

	return (0);
}
