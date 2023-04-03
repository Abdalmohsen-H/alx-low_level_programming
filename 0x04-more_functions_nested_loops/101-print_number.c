#include "main.h"
/**
 * print_number - func Prints any integer.
 * @n: input integer.
 */
void print_number(int n)
{
unsigned int num = n;
int div = 10;

if (n < 0)
{
_putchar('-');
num = -num;
}
while ((num / div) >= 1)
{
div *= 10;
}
div = div / 10;
while (div > 0)
{
_putchar((num / div) + '0');
num = num % div;
div = div / 10;
}
}
