#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees memory to add new structure
 * @d:Pointer to dog_t
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
