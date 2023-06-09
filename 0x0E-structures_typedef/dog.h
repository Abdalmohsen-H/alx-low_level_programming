#ifndef custom_h0
#define custom_h0

/**
* struct dog - define struct dog
*@name: dog name
*@age: dog age
*@owner: owner name
*
*Description: long desc.
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
typedef struct dog dog_t;
void print_dog(struct dog *d);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
