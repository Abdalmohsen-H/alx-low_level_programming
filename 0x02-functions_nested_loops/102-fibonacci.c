#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	double y[50] = {1, 2};
	int count;

	printf("1, 2, ");
	for (count = 2 ; count < 51 ; count++)
	{
		y[count] = y[count - 1] + y[count - 2];
		printf("%0.1f", y[count]);
		if (count < 49)
			printf(", ");
	}
	putchar('\n');
	return (0);
}
