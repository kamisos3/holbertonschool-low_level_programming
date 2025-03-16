#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - Concatenates all the arguments of to a single string.
 * @ac: The number of arguments.
 * @av: The array of argument strings.
 *
 * Return: Pointer to the new string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	int i, j, len = 0, index = 0;
	char *result;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate total length needed for the new string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++; /* For the newline character */
	}

	/* Allocate memory for the new string */
	result = malloc(sizeof(char) * (len + 1)); /* +1 for the null terminator */
	if (result == NULL)
		return (NULL);

	/* Concatenate all arguments into the new string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			result[index++] = av[i][j];
		}
		result[index++] = '\n'; /* Add a newline after each argument */
	}
	result[index] = '\0'; /* Null-terminate the string */

	return (result);
}
