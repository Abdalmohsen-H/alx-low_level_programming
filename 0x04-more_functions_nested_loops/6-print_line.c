#include "main.h"
/**
 * print_line - print line of underscores of with length n
 * @n: number of underscores to print
 * Return: void
 */
void print_line(int n)
{
int j;

/* If n is less or equal zero , print newline */
if (n <= 0)
{
_putchar('\n');
return;
}
for (j = 0; j < n; j++)
{
_putchar('_');
}
_putchar('\n');
}
