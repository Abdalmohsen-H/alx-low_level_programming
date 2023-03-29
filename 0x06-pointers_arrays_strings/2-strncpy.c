#include "main.h"
/**
 * _strncpy - copies n from str2
 * to str 2 strings
 * @dest: destination string
 * @src: source string
 * @n: nuber of bytes to get from src
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int y = 0;

while (*src != '\0' && n > 0)
{
*dest = *src;
src++;
dest++;
y++;
n--;
}
while (n > 0)
{
*dest = '\0';
src++;
dest++;
y++;
n--;
}
return (dest - y);
}
