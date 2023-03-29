#include "main.h"
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
