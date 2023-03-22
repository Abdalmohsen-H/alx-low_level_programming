#include <stdio.h>
/**
 * main - Entry point Fibonacci
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long y[50] = {1, 2};
	int count;

	printf("1, 2, ");
	for (count = 2 ; count < 51 ; count++)
	{
		y[count] = y[count - 1] + y[count - 2];
		printf("%lu", y[count]);
		if (count < 49)
			printf(", ");
	}
	putchar('\n');
	return (0);
}
