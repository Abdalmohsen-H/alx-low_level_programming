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
int sum_res = 0;
int ctr;
char *ch;

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
/* check if it isn't a digit*/
for (ch = argv[ctr]; *ch != '\0';  ch++)
{
if (*ch < '0' || *ch > '9')
{
/* argument not a digit */
printf("Error\n");
return (1);
}
}
/*printf("arg%d:%d , sum %d\n", ctr, atoi(argv[ctr]), sum_res);*/
/* the argument is a digit then add it*/
sum_res += atoi(argv[ctr]);
}
printf("%d\n", sum_res);
}
return (0);
}
