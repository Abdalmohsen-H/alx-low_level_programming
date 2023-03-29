#include "main.h"
/**
* _atoi - extract numbers from string
* and convert the numbers to integer
* @s: input string
* Return: extracted number as integer
*/
int _atoi(char *s)
{
int j, extracted_num, sign;

extracted_num = 0;
sign = 1;
/* Skip any leading non-numeric characters */
while ((*(s + j) >= '0') && (*(s + j) <= '9'))
{
/* check if a negative sign before the number*/
if (*(s + j - 1) == '-' && sign > 0)
{
sign *= -1;
}
/* Convert numeric characters to integer */
extracted_num = extracted_num * 10 + (*(s + j) -'0');
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
return (sign * extracted_num);
}
