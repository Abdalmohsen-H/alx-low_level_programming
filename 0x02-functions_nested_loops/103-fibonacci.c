#include <stdio.h>

/**
 * main - sum of even and less than 4,000,000
 * Return: Always 0 (Success)
 */
int main(void)
{
	int counter;
	unsigned long int first_term, second_term, next_term, even_sum;

	first_term = 1;
	second_term = 2;
	even_sum = 0;
	/* Iterate through Fibonacci sequence */
	for (counter = 1; counter <= 33; counter++)
	{
		/* Check if the term is even and less than 4,000,000 */
		if (first_term < 4000000 && (first_term % 2) == 0)
		{
			even_sum = even_sum + first_term;
		}
		/* Calculate the next term in the sequence */
		next_term = first_term + second_term;
		first_term = second_term;
		second_term = next_term;
	}
	printf("%lu\n", even_sum);
	return (0);
}
