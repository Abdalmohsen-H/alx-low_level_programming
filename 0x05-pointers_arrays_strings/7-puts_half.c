#include "main.h"
/**
 *puts_half - print string' last half
 * @str : char pointer parameter
 * Return: void
 *
 */
void puts_half(char *str)
{
	int length = 0;
	int n;

	/* calculate length of string */
	while (*(str + length) != '\0')
	{
	length++;
	}
	/* neglect '\0' as it was added after length*/
	if (length % 2 != 1)
		n = length / 2;
	else
		n = (length + 1) / 2;
	str = str + n;
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
