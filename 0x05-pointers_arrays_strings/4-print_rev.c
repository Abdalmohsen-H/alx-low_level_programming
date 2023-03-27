#include "main.h"
/**
 * print_rev - prints a string backwards(reverse order)
 * followed by a new line, to stdout
 * @s: integer pointer parameter
 * Return: void
 *
 */
void print_rev(char *s)
{
	char z;
	char *firstchar = s;

	if (*s == '\0')
	{
	return;  /* exit function if s is empty string*/
	}
	while (*s != '\0')
	{
		s++;
	}
	s--;
	/*now str at the last string before '\0'*/
	while (s != firstchar)
	{
		z = *s;
		_putchar(z);
		s--;
	}
	/*prints the first character at the end)*/
	_putchar(*firstchar);
	_putchar('\n');
}
