#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include "string.h"
/**
 * char *_strcpy - copies the string from src to dest
 * @dest: points to destination
 * @src: points to source string
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int ctr = 0;

while (*(src + ctr))
{
*(dest + ctr) = *(src + ctr);
ctr++;
}
*(dest + ctr) = '\0';
return (dest);
}
/**
 *  new_dog - creates new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: pointer to struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *tempdog;

if (age < 0 || !(name) || !(owner) )
{return (NULL);
}
tempdog = malloc(sizeof(dog_t));
if (!tempdog)
{
return (NULL);
}
tempdog->name = malloc(sizeof(char) * (strlen(name) + 1));
if (!(tempdog->name))
{
free(tempdog);
return (NULL);
}
tempdog->owner = malloc(sizeof(char) * (strlen(owner) + 1));
if (!(tempdog->owner))
{
free(tempdog->name);
free(tempdog);
return (NULL);
}
tempdog->name = _strcpy(tempdog->name, name);
tempdog->age = age;
tempdog->owner = _strcpy(tempdog->owner, owner);

return (tempdog);
}
