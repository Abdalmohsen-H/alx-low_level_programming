#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lstdg;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lstdg = n % 10;
	if (lstdg > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lstdg);
	else if (lstdg == 0)
		printf("Last digit of %d is %d and is 0\n", n, lstdg);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lstdg);

	return (0);
}
