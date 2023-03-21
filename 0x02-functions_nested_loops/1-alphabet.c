#include "main.h"
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	print_alphabet();
	return (0);
}
void print_alphabet(void)
{
		while (*wor)
		{
			char *wor = "abcdefghijklmnopqrstuvwxyz";
			_putchar(*wor);
			/* increments pointer variable "wor" to point to next character in string */
	
			wor++;
		}
		_putchar('\n');
}
