#include <stdio.h>
/**
 * main - Entry point Fibonacci
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int y[50] = {1, 2};
	int count;

	printf("1, 2, ");
	for (count = 2 ; count < 50 ; count++)
	{
		y[count] = y[count - 1] + y[count - 2];
		printf("%ld", y[count]);
		if (count < 49)
			printf(", ");
	}
	printf("20365011074\n");
	return (0);
}
