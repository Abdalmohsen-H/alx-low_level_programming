#include <stdio.h>
/**
 * main - Entry point Fibonacci first 98
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long a = 1, b = 2, c, a1, a2, b1, b2, tempo1, tempo2;
	int count;

	printf("1, 2");
	for (count = 3; count <= 98; count++)
	{
		if (count <= 92)
		{
			c = a + b;
			a = b;
			b = c;
			printf(", %lu", c);
		}
		else
		{
			if (count == 93)
			{
				a1 = a / 1000000000;
				a2 = a % 1000000000;
				b1 = b / 1000000000;
				b2 = b % 1000000000;
			}
			tempo1 = b1;
			tempo2 = b2;
			b1 = b1 + a1 + (b2 + a2) / 1000000000;
			b2 = (b2 + a2) % 1000000000;
			a1 = tempo1;
			a2 = tempo2;
			printf(", %lu%09lu", b1, b2);
		}
	}
	printf("\n");
	return (0);
}
