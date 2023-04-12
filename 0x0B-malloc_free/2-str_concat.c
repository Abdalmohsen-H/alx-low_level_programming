#include "main.h"
#include <stdlib.h>
/* #include <stdio.h> */
#include <string.h>
/**
 * create_array -  concatenates two strings
 * on new allocated memory space
 * @s1: input string 1
 * @s2: input string 2
 * Return: pointer to new space, Else NULL
 */
char *str_concat(char *s1, char *s2)
{
char *outarr;
int length1 = 0,length2 = 0, i = 0;

if (s1 == NULL)
	s1 = "\0";
if (s2 == NULL)
	s2 = "\0";
length1 = strlen(s1);
length2 = strlen(s2);
outarr = malloc((length1 + length2 + 1) * sizeof(char));
if (outarr == NULL)
{
return (NULL);
}
while (length1 > 0 && *s1 != '\0')
{
outarr[i] = *s1;
s1++;
length1--;
i++;
}
while (length2 > 0 && *s2 != '\0')
{
outarr[i] = *s2;
s2++;
length2--;
i++;
}
return (outarr);
}
