#include "main.h"
#include <ctype.h>
#include <string.h>
#include <stddef.h>
/**
 * cap_string - convert first lowercase
 * letter of word to uppercas
 * @str: input string
 * Return: convertaed string
 */
char *cap_string(char *str)
{
int i = 0;
int j;
/* Find length of input string */
while (str[i] != '\0')
{
i++;
}
/* Capitalize first letter on each word */
for (j = 0; j < i; j++)
{
/*search for a character in a string*/
if (strchr(" \t\n,.!?\"(){};", str[j]) != NULL)
{
if (str[j + 1] >= 'a' && str[j + 1] <= 'z')
{
str[j + 1] -= 32;
}
}
}
/* Capitalize the first letter of the string */
if (str[0] >= 'a' && str[0] <= 'z')
{
str[0] -= 32;
}
return (str);
}
