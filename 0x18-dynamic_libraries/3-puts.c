#include "main.h"
/**
 * _puts - rints a string, followed by a new line, to stdout
 * @str: integer pointer parameter
 * Return: void
 *
 */
void _puts(char *str)
{
	char x = (char) '\0';
	char z;

	while (*str != x)
	{
		z = *str;
		_putchar(z);
		str++;
	}
	_putchar('\n');
}
