#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * count_words - Counts the number of words in a string.
 * @str: The string to evaluate.
 *
 * Return: Number of words.
 */
int count_words(char *str)
{
	int count = 0, i = 0;

	while (str[i])
	{
		if ((str[i] != ' ' && (i == 0 || str[i - 1] == ' ')))
			count++;
		i++;
	}
	return (count);
}
/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: Pointer to an array of strings (words), or NULL if failure.
 */
char **strtow(char *str)
{
	char **words;
	int word_count, i = 0, j, k, word_len;

	if (str == NULL || *str == '\0')
		return (NULL);

	word_count = count_words(str);
	if (word_count == 0)
		return (NULL);

	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	for (j = 0; j < word_count; j++)
	{
		while (str[i] == ' ')
			i++;
		word_len = 0;
		while (str[i + word_len] && str[i + word_len] != ' ')
			word_len++;

		words[j] = malloc((word_len + 1) * sizeof(char));
		if (words[j] == NULL)
		{
			while (j--)
				free(words[j]);
			free(words);
			return (NULL);
		}
		for (k = 0; k < word_len; k++)
			words[j][k] = str[i++];
		words[j][k] = '\0';
	}
	words[j] = NULL; /* Null-terminate the array of words */

	return (words);
}
