#include "main.h"

/**
* _strpbrk - locate any match of accept
* letters in sting
* @s: input string
* @accept: search chars
* Return: pointer to byte in s found
* if found in accept, else NULL
*/
char *_strpbrk(char *s, char *accept)
{
int found = 0;
int ctr = 0;
int ctr2;

while (*(s + ctr) != '\0')
{
for (ctr2 = 0; *(accept + ctr2) != '\0'; ctr2++)
{
if (*(s+ctr) == *(accept + ctr2))
{
found = 1;
/*printf("Match found: %c\n", *(s + ctr));*/
/*printf("found = %d\n", found);*/

return (s + ctr);
}
/*printf("No match: %c\n", *(s+ctr));*/
/*printf("found = %d\n", found);*/
}
if (found == 1)
	break;
ctr++;
}
return ('\0');
}
