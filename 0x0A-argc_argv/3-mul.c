#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints multplication
 *  of 2 passed (numbers) arguments
 * @argc: argument counter
 * @argv: argument values
 * Return: 0 if seuccess
 * and 1 if inputs less than 2 numbers
 */
/* int main(int *argc, char **argv) */
int main(int argc, char *argv[])
{
int mult_res;

/* argc == 3 equal to (argc-1) == 2 */
/* because first arg , i.e. argv [0] */
/* in argc is prog name*/
if ((argc - 1) == 2)
{
mult_res = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", mult_res);
return (0);
}
printf("Error\n");
return (1);
}
