#include <stdio.h>
/**
 * main - fuzz buzz numbers
 *
 * Return: Always 1.
 */
int main(void)
{
int n;

for (n = 1;  n <= 100; n++)
{
if (n % 3 == 0 && n % 5 == 0)
	printf("FizzBuzz\t");
else if (n % 3 == 0)
	printf("Fizz\t");
else if (n % 5 == 0)
	printf("Buzz\t");
else
	printf("%d\t", n);
}
return (1);
}
