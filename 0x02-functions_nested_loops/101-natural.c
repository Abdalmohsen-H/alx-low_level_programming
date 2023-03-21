#include <stdio.h>
/**
 * main - sum of all the multiples of 3 or 5 below 1024 (excluded),
 * Return: always zero (Success)
 */
int main(void)
{
	int j;
	int sum = 0;

	for (j = 0; j < 1024; j++)
	{
		if ((j % 3) == 0 || (j % 5) == 0)
			sum += j;
	}
	printf("%d\n", sum);
	return (0);
}
