#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 1 - success
 */
int main(void)
{
	char tex[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fputs(tex, stderr);
	return (1);
}
