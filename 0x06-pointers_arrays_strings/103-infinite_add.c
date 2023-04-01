#include "main.h"
#include <string.h>
/**
 * infinite_add - adds two numbers represented
 * on string format
 * @num1: first number
 * @num2: second number
 * @result: buffer to store the result
 * @buffer_size: size of the buffer
 *
 * Return: a pointer toresult,
 * or 0 if buffer is too small
 */
char *infinite_add(char *num1, char *num2, char *result, int buffer_size)
{
int len1 = strlen(num1), len2 = strlen(num2);
int carry = 0, sum = 0, i, j;
char temp;

/* Check if the buffer is large enough to hold the result */
/**
* length + 2 because those 2 incase
* there is a carry over then null termintor
*/
if (buffer_size < len1 + 2 || buffer_size < len2 + 2)
{
return (0);
}
/**
* Add the numbers digit by digit
*starting from the least significant digit
*/
for (i = 0; (i < buffer_size - 1); i++)
{
sum = carry;
if (i < len1)
{
sum += num1[len1 - i - 1] - '0';
}
if (i < len2)
{
sum += num2[len2 - i - 1] - '0';
}
/* Check if there is still a carry-over */

if (i >= len1 && i >= len2)
{
if (carry == 1)
{
result[i] = carry + '0';
}
break;
}
if (sum > 9)
{
sum = sum - 10;
carry = 1;
}
else
{
carry = 0;
}
result[i] = sum + '0';
}
/* Reverse the result buffer */
for (j = 0; j < i / 2; j++)
{
temp = result[j];
result[j] = result[i - j];
result[i - j] = temp;
}
/* Add the null terminator at the end of the result */
result[i + 1] = '\0';
/* Return a pointer to the result */
return (result);
}
