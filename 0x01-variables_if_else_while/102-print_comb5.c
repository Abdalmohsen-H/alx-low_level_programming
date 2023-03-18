#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int fir;
int sec;
for (fir = 0; fir <= 99; fir++)
{
	for (sec = 0; sec <= 99; sec++)
	{	
		if (fir < sec)
		{
			putchar(fir / 10 + '0');
			putchar(fir % 10 + '0');
			putchar(' ');
			putchar(sec / 10 + '0');
			putchar(sec % 10 + '0');	
			if (fir != 98 || sec != 99)
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
