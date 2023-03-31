#include "main.h"
/**
* rot13 - convert string to rot13
* @str: input string
* Return: pointer to the encoded string
*/
char *rot13(char *str)
{
int i, j;
char chars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j < 52; j++)
{
if (str[i] == chars[j])
{
str[i] = rot13[j];
break;
}
}
}
return (str);
}
