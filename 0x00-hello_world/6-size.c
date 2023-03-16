#include <stdio.h>
/**
 * maine -Entry point
 *
 * return : always 0 - (success)
 *
 */
int main(void)
{
	int x = sizeof(char);
	int y = sizeof(int);
	/*int z = sizeof(long int);*/
	int q = sizeof(long long int);
	int flo = sizeof(float);
	printf("Size of a char: %d byte(s)\n", x);
	printf("Size of a int: %d byte(s)\n", y);
	printf("sie of a long int : %d byte (s)\n", (int)sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", q);
	printf("Size of a float: %d byte(s)\n", flo);
	return (0);
}
