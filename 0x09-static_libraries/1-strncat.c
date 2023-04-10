#include "main.h"
/**
 * _strncat - concatnate two strings
 * with n chars from src
 * @dest: destination string
 * @src: source string
 * @n: nuber of bytes to get from src
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
int y = 0;

while (*dest != '\0')
{
dest++;
y++;
}
while (n > 0 && *src != '\0')
{
*dest = *src;
src++;
dest++;
y++;
n--;
}
*dest = '\0';
return (dest - y);
}
