#include "dog.h"
#include <stddef.h>
/**
 * init_dog - Initializes struct dog as variable type
 * @d:pointer to initialize dog structure
 * @name:name of the dog
 * @age:age of the dog
 * @owner:name of owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
