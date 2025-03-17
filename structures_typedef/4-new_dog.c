#include <stdlib.h>
#include "dog.h"
/**
 * str_length - Writes string lenght
 * @str:string
 *
 * Return:String lenght
 */
int str_length(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;

	return (len);
}

/**
 * str_copy - Copies string
 * @dest:destination
 * @src:string source
 */
void str_copy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

/**
 * new_dog - Makes new structure
 * @name:points to dog name
 * @age:dog age
 * @owner:points to owner
 *
 * Return: Pointer to the new dog_t structure, if fails NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_copy;
	char *owner_copy;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	name_copy = malloc(str_length(name) + 1);
	if (name_copy == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	str_copy(name_copy, name);

	owner_copy = malloc(str_length(owner) + 1);
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(new_dog);
		return (NULL);
	}
	str_copy(owner_copy, owner);

	new_dog->name = name_copy;
	new_dog->age = age;
	new_dog->owner = owner_copy;

	return (new_dog);
}
