#include <stdio.h>
/**
 * main - prints all arguments
 * @argc: argument counter
 * @argv: argument values
 * Return: 0
 */
/* int main(int *argc, char **argv) */
int main(int argc, char *argv[])
{
int idx;

/* idx < args , because argv index */
/* start from 0, and have args count elements*/
/* i.e. from argv [0] to argv [argc - 1] */
for (idx = 0; idx < argc; idx++)
{
printf("%s\n", argv[idx]);
}
return (0);
}
