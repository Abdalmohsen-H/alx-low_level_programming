#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints sum of passed
 * (numbers) arguments
 * @argc: argument counter
 * @argv: argument values
 * Return: 0 if seuccess, 1 if any input
 *  not a anumber;
 */
/* int main(int *argc, char **argv) */
int main(int argc, char *argv[])
{
int sum_res;
int ctr;

/* argc == 1 equal to (argc-1) == 0 */
/* because first arg , i.e. argv [0] */
/* in argc is program name not passed input*/
if ((argc - 1) == 0)
{
printf("0\n");
}
else
{
/* ctr start from 1 to get only passed args */
for (ctr = 1; ctr <= (argc - 1) ; ctr++)
{
/* if it is a digit and positive*/
if (atoi(argv[ctr]) > 0)
{
sum_res += atoi(argv[ctr]);
}
/* else if arg is 0 */
else if (*argv[ctr] == '0')
{
continue;
}
/* argument not a digit */
/* atoi of non digit is undefined */
else
{
printf("Error\n");
return (1);
}
}
printf("%d\n", sum_res);
}
return (0);
}
