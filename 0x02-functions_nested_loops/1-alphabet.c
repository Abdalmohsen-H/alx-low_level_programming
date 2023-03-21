#include "main.h"
/**
 * main -Entry point
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
