#include "main.h"
/**
 * print_alphabet - print lowercase alphbet
 *
 * Return: Always 0 (Success)
 *
 */
void print_alphabet(void)
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
