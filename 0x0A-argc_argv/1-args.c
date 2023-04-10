#include <stdio.h>
/**
 * main - prints number of arguments passed
 * @argc: argument counter
 * @argv: argument values
 * Return: 0
 */
/* int main(int *argc, char **argv) */
int main(int argc, char *argv[])
{
(void) argv;
/*(argc - 1) number of arguments passed to func */
printf("%d\n", argc - 1);
return (0);
}

