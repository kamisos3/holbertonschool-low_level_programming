#include "main.h"
/**
 * leet - Encodes a string into 1337 (leet) speak
 * @str: string
 * Return: Result encoded string
 */
char *leet(char *str)
{
	int i;
	int j;
	char *chars = "aAeEoOtTlL";
	char *replacements = "4433007711z";

	for (i = 0; str[i] != '\0'; i++)
	{
		for  (j = 0; chars[j] != '\0'; j++)
		{
			if (str[i] == chars[j])
			{
				str[i] = replacements[j];
				break;
			}
		}
	}
	return (str);
}
