#include <stdio.h>
/**
 * main - prints its name
 * @argc: argument counter
 * @argv: argument values
 * Return: 0
 */
/* int main(int *argc __attribut__((unused)), char **argv) */
/* int main(int *argc, char **argv) */
int main(int argc, char *argv[])
{
(void) argc;
printf("%s\n", argv[0]);
return (0);
}
