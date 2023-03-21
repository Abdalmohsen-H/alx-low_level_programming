#include "main.h"
/**
 * print_alphabet - print lowercase alphbet
 *
 * Return: Always 0 (Success)
 *
 */
char *wor = "abcdefghijklmnopqrstuvwxyz";

void print_alphabet(void)
{
		while (*wor)
		{
			_putchar(*wor);
			/* increments pointer variable "wor" to point to next character in string */
			wor++;
		}
		_putchar('\n');
}
