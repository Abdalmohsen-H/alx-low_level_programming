#include "main.h"
/**
* wildcmp - compare 2 strings
* @s1: input string1.
* @s2: input string2.
* Return: 1 if identical, else 0.
*/
int wildcmp(char *s1, char *s2)
{
/* this line is recursion exit for identical */
/* also in case both input strings are empty */
if (*s1 == '\0' && *s2 == '\0')
{
	return (1);
}
if (*s2 == '*')
{
	/* If s1 is empty, skip '*' */
	/* & check next character */
	if (*s1 == '\0')
	{
	return (wildcmp(s1, s2 + 1));
	}
	/* if S1 not null compare it once with '*' */
	/* and once with next char after '*' */
	if (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1))
	{
	return (1);
	}
}
if (*s1 == *s2)
{
	/* If 2 chars match,check next chars */
	return (wildcmp(s1 + 1, s2 + 1));
}
/* strings didn't match */
return (0);
}
