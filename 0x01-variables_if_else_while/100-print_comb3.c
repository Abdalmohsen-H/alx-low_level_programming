#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	int j;

	for (x = 0; x < 9; x++)
	{
		for (j = x + 1; j <= 9; j++)
		{
			putchar(x + '0');
			putchar(j + '0');
			if (x < 8 || j < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
