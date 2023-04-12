#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * strtow -  split strings to words
 * on new allocated memory space
 * @str: input string
 * Return: pointer to new space, Else NULL
 */
char **strtow(char *str)
{
char *words[][];
int i, wrdctr = 0, j = 0, k = 0;
size = strlen(str);
while (*(str + i) != '\0')
{
if (*(str + i)= " ")
{
wrdctr++;
}
i++
}
i = 0;
while (*(str + i) != '\0')
{
	if (*(str + i) = " " & wrdctr > 0)
	{
	j++;
	k = 0;
	}
words[j][k] = *(str + i);
i++;
}
}
/* check later*/
int (words);
}
