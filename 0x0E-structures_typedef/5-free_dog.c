#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - print struct dog
 * @d: pointer for dog struct
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		/* different ways to access struct pointers element*/
		if (d->name)
			free((*d).name);
		if (d->age)
			free(d-<age);
		if ((*d).owner)
			free(d->owner);
		free(d);
	}
}
