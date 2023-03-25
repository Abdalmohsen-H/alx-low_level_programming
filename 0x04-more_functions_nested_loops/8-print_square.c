#include "main.h"
/**
 * print_square - prints square with
 * a size as input
 * @size: int
 * Return: void
 */
void print_square(int size)
{
int width;
int height;

height = size;
while (height > 0)
{
	width = size;
	while (width > 0)
	{
		_putchar('#');
		width--;
	}
	if (height > 1)
		_putchar('\n');
	height--;
}
_putchar('\n');
}
