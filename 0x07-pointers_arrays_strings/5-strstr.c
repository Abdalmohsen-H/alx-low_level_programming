#include "main.h"
/**
 * _strstr - find a word in sting
 * @haystack: input string
 * @needle: search word
 * Return: pointer to char in input string
 * if findword found, else NULL
 */
char *_strstr(char *haystack, char *needle)
{
int ctr = 0;
int ctr2;
int frstmtch = 0;
char *s = haystack;/*char pointer to haystack*/
char *findword = needle;/*char ptr to needle*/
int allfound = 0;


while (*(s + ctr) != '\0')
{
if (*(s + ctr) == *(findword) && *(findword) != '\0')
{
frstmtch = ctr;
/*printf("1st char Match found: %c\n", *(s + ctr));*/
allfound = 0;
for (ctr2 = 0; *(findword + ctr2) != '\0'; ctr2++)
{
if (*(s + ctr) != *(findword + ctr2))
{
/*printf("didn't find : %c after 1st match", *(findword + ctr2));*/
ctr = frstmtch;
allfound = -1;
break;
}
ctr++;
}
if (allfound >= 0 && *(findword + ctr2) == '\0')
{
/*printf("return because all word found at %d\n", ctr);*/
return (s + frstmtch);
}
}
ctr++;
}
return ('\0');
}
