#include "main.h"
/**
 * print_alphabet_x10 - print lowercase alphbet
 *
 * Return: Always 0 (Success)
 *
 */
void print_alphabet_x10(void)
{
int i;

for (i = 1; i <= 10 ; i++)
{
	char *wor = "abcdefghijklmnopqrstuvwxyz";

	while (*wor)
	{
		_putchar(*wor);
		/* increments pointer variable "wor" to point to next character in string */
		wor++;
	}
	_putchar('\n');
}
}
