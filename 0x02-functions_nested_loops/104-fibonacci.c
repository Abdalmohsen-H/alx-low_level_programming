#include <stdio.h>
/**
 * main - Entry point Fibonacci
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long a = 1, b = 2, c;
	int count;

	printf("1, 2");
	for (count = 3 ; count <= 98 ; count++)
	{
		c = a + b;
		a = b;
		b = c;
		printf(", %lu", c);
	}
	printf("\n");
	return (0);
}
