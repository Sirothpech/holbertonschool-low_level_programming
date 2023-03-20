#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free memory
 * @d: free dog
 */

void free_dog(dog_t *d)
{
	if (d !=  NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
