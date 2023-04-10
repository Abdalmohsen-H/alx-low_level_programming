#include "main.h"
/**
 * _strspn -  count length of a prefix
 * match any of accept from start
 * @s: input string
 * @accept: search chars
 * Return: count of matches at start
 */
unsigned int _strspn(char *s, char *accept)
{
int found = 0;
int ctr = 0;
int ctr2;

while (*(s + ctr) != '\0')
{
for (ctr2 = 0; *(accept + ctr2) != '\0'; ctr2++)
{
if (*(s + ctr) == *(accept + ctr2))
{
found += 1;
break;
}
}
/* no match found, stop searching */
if (*(accept + ctr2) == '\0')
	break;
ctr++;
}
return (found);
}
