#include <stdlib.h>
#include "dog.h"

/**
 *this is  free_dog - frees memory allocated for a struct dog
 * @d:this is  struct dog to free
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
