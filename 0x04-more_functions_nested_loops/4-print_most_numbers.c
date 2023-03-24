#include "main.h"
/**
 * print_most_numbers - prints numbersexcept 2,4
 * Return: void
 *
 */
void print_most_numbers(void)
{
	char x = '0';

	while (x <= '9')
	{
		if ('x' != 2 && x != '4')
			_putchar(x);
		x++;
	}
	_putchar('\n');
}
