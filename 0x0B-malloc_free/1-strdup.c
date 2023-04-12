#include "main.h"
#include <stdlib.h>
/* #include <stdio.h>*/
/* #include <string.h>*/
/**
 * _strdup - copy input string on new
 * allocated memory space
 * @str: array size
 * Return: pointer to new space, Else NULL
 */
char *_strdup(char *str)
{
char *outarr;
int length = 0, i = 0;

/* length = strlen(str);*/
while (*(str + i) != '\0')
{
i++;
length++;
}
i = 0;
outarr = malloc((length + 1) * sizeof(char));
if (str == NULL || outarr == NULL)
{
return (NULL);
}
while (length > 0 && *str != '\0')
{
outarr[i] = *str;
str++;
length--;
i++;
}
return (outarr);
}
