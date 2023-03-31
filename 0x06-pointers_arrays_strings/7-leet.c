#include "main.h"
/**
 * leet - encodes a string into 1337
 * @str: input string
 * Return: converted stringto 1337
 */
char *leet(char *str)
{
int i;
int inpt_index;
char sml[] = {'a', 'e', 'o', 't', 'l', '\0'};
char cptl[] = {'A', 'E', 'O', 'T', 'L', '\0'};
char numbers[] = {'4', '3', '0', '7', '1', '\0'};

for (inpt_index = 0; str[inpt_index] != '\0'; inpt_index++)
{
for (i = 0; i < 5; i++)
{
if (str[inpt_index] == sml[i] || str[inpt_index] == cptl[i])
{
str[inpt_index] = numbers[i];
}
}
}
return (str);
}
