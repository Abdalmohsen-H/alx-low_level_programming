#include <stdio.h>
#include "dog.h"
/**
 * print_dog - print struct dog
 * @d: pointer for dog dtruct
 * @owner: dog owner
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		/* different ways to access struct pointers element*/
		printf("Name: %s\n", (d->name) ? (*d).name : "(nil)");
		(d->age) ? printf("Age: %f\n", (*d).age) : printf("Age: (nil)");
		printf("Owner: %s\n", ((*d).owner) ? d->owner : "(nil)");
	}
}
