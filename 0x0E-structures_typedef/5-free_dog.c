#include "dog.h"
#include <stdlib.h>

/**
  * free_dog - A function that frees dogs
  * @dog_t: struct dog newtype
  * @d: memory to be freed
  */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
