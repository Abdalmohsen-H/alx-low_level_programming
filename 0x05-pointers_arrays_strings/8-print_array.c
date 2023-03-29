#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of array of integers
 * @a: integer pointer parameter
 * @n: number of elements to be printed
 * Return: void
 *
 */
void print_array(int *a, int n)
{
int i = 0;
while (i < n)
{
if (i <= n - 2)
{
printf("%d, ", a[i]);
}
else if (i == n - 1)
{
printf("%d", a[i]);
}
i++;
}
printf"\n");
}
