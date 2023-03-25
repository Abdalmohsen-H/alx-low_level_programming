#include <main.h>
/**
 * more_numbers - Entry point
 * prints 0 to 14 , 14 time
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
int row, d;

for (row = 0 ; row < 15 ; row++)
{
for (d = 0 ; d < 15 ; d++)
{
	if (d > 9)
	{
		putchar(d / 10 + '0');
	}
putchar(d % 10 + '0');
}
putchar('\n');
}
return (0);
}
