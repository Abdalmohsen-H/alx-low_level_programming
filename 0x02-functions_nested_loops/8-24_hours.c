#include "main.h"

/**
 * jack_bauer - this function prints
 * every minute of the day
 * Return: void
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour <= 23; hour++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			/* Print the tens digit of the hour */
			_putchar(hour / 10 + '0');
			/* Print the ones digit of the hour */
			_putchar(hour % 10 + '0');
			_putchar(':');
			/* Print the tens digit of the minute */
			_putchar(minute / 10 + '0');
			/* Print the ones digit of the minute */
			_putchar(minute % 10 + '0');
			_putchar('\n');
		}
	}
}
