#include "main.h"
/**
*_strcmp - compare two strings
*@s1: string 1
*@s2: string2
*Return: 0 if identical strings
*else return substract value of ascii
*for first two different chars 
*/
int _strcmp(char *s1, char *s2)
{
int i = 0;
int ret = 0;
while (*(s1 + i) == *(s2 + i) && *(s1 + i) != '\0' && *(s2 + i) != '\0')
{
i++;
}
if (*(s1 + i) != '\0' && *(s2 + i) != '\0' && *(s1 + i) && *(s2 + i) )
{
ret = *(s1 + i) - *(s2 + i);
}
return (ret);
}
