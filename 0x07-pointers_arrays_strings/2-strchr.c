#include <stdio.h>
/**
 * _strchr - find and locate character
 * in a string, first occurrence,
 * also prints from found till end of string
 * @s: input string
 * @c: charcter to seach for
 * Return: address if found, else NULL
 */
char *_strchr(char *s, char c)
{
int found = 0;
int ctr = 0;

while (*(s + ctr) != '\0')
{
if (found == 0 && *(s + ctr) == c)
{
found = 1;
break;
}
ctr++;
}
if (found == 1)
{
return (s + ctr);
}
else
	return ('\0');
}
