#include "main.h"
/**
* print_number - prints an integer.
* @num: input integer.
* Return: no return.
*/
void print_number(int num)
{
unsigned int abs_num, digit, scale;

if (num < 0)
{
_putchar('-');
abs_num = (unsigned int)(-num);
}
else
{
abs_num = (unsigned int)num;
}
digit = abs_num;
scale = 1;
while (digit > 9)
{
digit /= 10;
scale *= 10;
}
for (; scale >= 1; scale /= 10)
{
_putchar(((abs_num / scale) % 10) + '0');
}
}
