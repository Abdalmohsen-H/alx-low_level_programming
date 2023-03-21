#include "main.h"
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	/*this takes the first char of the string*/
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
	return (0);
}
