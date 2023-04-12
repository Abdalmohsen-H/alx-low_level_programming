#include "main.h"
#include <stdlib.h>
/* #include <stdio.h> */
#include <string.h>
/**
 * argstostr -  concatenates all arguments
 * on new allocated memory space
 * @ac: argc
 * @av: argv
 * Return: pointer to new space, Else NULL
 */
char *argstostr(int ac, char **av)
{
char *outarr;
int i = 0, j, k;
int size = 1;

if (ac == 0 || av == NULL)
return (NULL);
for (j = 0; j < ac; j++)
{
if (av[j] == NULL)
	av[j] = "\0";
size += strlen(av[j]);
}
outarr = malloc(size *sizeof(char));
if (outarr == NULL)
{
return (NULL);
}
for (j = 0; j < ac; j++)
{
k = strlen(av[j]);
while (k > 0 && *av[j] != '\0')
{
outarr[i] = *av[j];
av[j]++;
i++;
k--;
}
outarr[i] = '\n';
i++;
}
return (outarr);
}
