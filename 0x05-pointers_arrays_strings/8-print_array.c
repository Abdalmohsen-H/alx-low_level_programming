#include "main.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_array - prints n elements of array of integers
 * @a: integer pointer parameter
 * @n: number of elements to be printed
 * Return: void
 *
 */
void print_array(int *a, int n)
{
int i = 1;
while (i <= n && *a)
{
if (i <= n - 1)
{
printf("%d, ", *a);
}
else if (i == n)
{
printf("%d\n", *a);
}
a++;
i++;
}
}
