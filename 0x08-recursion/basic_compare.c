#include "main.h"
/**
* wildcmp - compare 2 strings
* @s1: input string1.
* @s2: input string2.
* Return: 1 if identical, else 0.
*/
int help_wildcmp(char *s1, char *s2);

int wildcmp(char *s1, char *s2)
{
int len1, len2;

len1 =_strlen_recursion(s1);
len2 =_strlen_recursion(s2);
if (s1 != s2)
{
return  (0);
}
return(help_wildcmp(s1, s2));
}
/**
* help_wildcmp - helper function to
* compare 2 strings
* @s1: input string1.
* @s2: input string2.
* Return: 1 if identical, else 0.
 */
int help_wildcmp(char *s1, char *s2)
{
if (*s1 != *s2 && *s2 != '*')
{
return (0);
}
if (*s1 == '\0' || *s2 == '\0')
{
return (1);
}
s1++;
s2++;
return (help_wildcmp(s1, s2));
}
