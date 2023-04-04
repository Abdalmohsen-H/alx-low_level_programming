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
while (*s != '\0')
{
if (*s == c)
{
return (s + ctr);
}
s++;
}
return ('\0');
}
