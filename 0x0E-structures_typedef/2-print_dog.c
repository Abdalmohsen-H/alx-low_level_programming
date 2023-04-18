#include <stdio.h>
#include "dog.h"
/**
 * init_dog - init.instance(variable) of struct dog
 * @d: pointer for dog struct
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		/* different ways to access struct pointers element*/
		printf("name: %s\n", (d->name)? (*d).name : "(nil)");
		(d->age)? printf("age: %f\n", (*d).age) : printf("age: (nil)");
		printf("owner: %s\n", ((*d).owner)? d->owner : "(nil)");
	}
}
