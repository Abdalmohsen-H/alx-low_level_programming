#include "main.h"
/**
 * print_numbers - prints numbers
 * Return: void
 *
 */
void print_numbers(void)
{
	char x = '0';

	while (x <= '9')
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}
