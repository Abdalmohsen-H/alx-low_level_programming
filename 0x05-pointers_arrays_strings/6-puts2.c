#include "main.h"
/**
 * puts2 - function that prints even located
 * chars on a string
 * @str: input to reverse
 */
void puts2(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
	if (count % 2 != 1)
	{
		_putchar(*str);
	}
	str++;
	count++;
	}
	_putchar('\n');
}
