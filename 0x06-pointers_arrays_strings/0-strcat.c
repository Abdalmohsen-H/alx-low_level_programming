#include "main.h"
/**
 * _strcat - concatnate two strings
 * @dest: destination string
 * @src: source string
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
int y = 0;

while (*dest != '\0')
{
dest++;
y++;
}
while (*src != '\0')
{
*dest = *src;
src++;
dest++;
y++;
}
*dest = '\0';
return (dest - y);
}
