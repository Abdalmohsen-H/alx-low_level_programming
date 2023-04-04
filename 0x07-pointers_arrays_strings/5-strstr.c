#include "main.h"
/**
 * _strstr - find a word in sting
 * @s: input string
 * @findword: search word
 * Return: pointer to char in input string
 * if findword found, else NULL
 */
char *_strstr(char *s, char *findword)
{
int found = 0;
int ctr = 0;
int ctr2;
int frstmtch = 0;

while (*(s + ctr) != '\0')
{
if (*(s + ctr) == *(findword) && found == 0)
{
found = 1;
frstmtch = ctr;
/*printf("Match found: %c\n", *(accept));*/
ctr++;
for (ctr2 = 1; *(findword + ctr2) != '\0'; ctr2++)
{
if (*(s + ctr) != *(findword + ctr2))
{
/*printf("didn't find : %c", *(accept + ctr2));*/
return ('\0');
}
ctr++;
}
/*printf("return because all word found at %d\n", ctr);*/
return (s + frstmtch);
}
ctr++;
}
return ('\0');
}
