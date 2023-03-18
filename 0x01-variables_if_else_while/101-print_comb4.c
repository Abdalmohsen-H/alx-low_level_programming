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
	int y;

	for (x = 0; x < 8; x++)
	{
		for (j = x + 1; j < 9; j++)
		{
			for (y = j + 1; y <= 9; y++)
			{
				putchar(x + '0');
				putchar(j + '0');
				putchar(y + '0');
				if (x < 7 || j < 8 || y < 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
