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
	char *wor = "_putchar";
	/**
	 * another way for this task char sh[] = {'_', 'p', 'u', 't', 'c'
	 * , 'h', 'a', 'r', '\0'}; where '\0' stand for string ended
	 */
	while (*wor)
	{
		_putchar(*wor);
		/* increments pointer variable "wor" to point to next character in string */

		wor++;
	}
	_putchar('\n');
	return (0);
}
