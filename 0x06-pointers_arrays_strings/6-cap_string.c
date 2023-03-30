#include "main.h"
/**
 * cap_string - convert first lowercase
 * letter of word to uppercas
 * @c: input string
 * Return: convertaed string
 */
char *cap_string(char *c)
{
int i = 0;
int prvconverted = 0;

while (*(c + i) != '\0')
{
if (*(c + i) >= 'a' && *(c + i) <= 'z')
{
if (prvconverted == 0 && !(*(c + i - 1) >= 'A' && *(c + i - 1) <= 'Z'
			) && !(*(c + i - 1) >= 'a' && *(c + i - 1) <= 'z'))
{
*(c + i) = *(c + i) - 32;
prvconverted = 1;
}
}
if (!(*(c + i) >= 'A' && *(c + i) <= 'Z'
			) && !(*(c + i) >= 'a' && *(c + i) <= 'z'))
{
prvconverted = 0;
}
i++;
}
return (c);
}
