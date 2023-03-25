#include "main.h"
/**
 * more_numbers - Entry point
 * prints 0 to 14 , 14 time
 * Return: void
 */
void more_numbers(void)
{
int row, d;

for (row = 1 ; row < 15 ; row++)
{
for (d = 0 ; d < 15 ; d++)
{
	if (d > 9)
	{
		_putchar(d / 10 + '0');
	}
_putchar(d % 10 + '0');
}
_putchar('\n');
}
}
