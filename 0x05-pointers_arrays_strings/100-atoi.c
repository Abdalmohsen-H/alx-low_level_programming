#include "main.h"
/**
* _atoi - extract numbers from string
* and convert the numbers to integer
* @s: input string
* Return: extracted number as integer
*/
int _atoi(char *s)
{
int i, j, extracted_num, sign;

i = 0;
extracted_num = 0;
sign = 1;
/* Skip any leading non-numeric characters */
while ((*(s + i) < '0' || *(s + i) > '9') && (*(s + i) != '\0'))
{
if (*(s + i) == '-')
{
sign *= -1;
}
i++;
}
/* Convert numeric characters to integer */
j = i;
while ((*(s + j) >= '0') && (*(s + j) <= '9'))
{
extracted_num = extracted_num * 10 + sign * (*(s + j) -'0');
/*
*first: extracted_num * 10 shifts
*old numbers to left to add new
*
* second: *(s + j) get character at
*j-th position of input string
*
* (*(s + j) - '0') this convert number
* from char to integer value
*by subtracting ascii codes
*/
j++;
}
return (extracted_num);
}
