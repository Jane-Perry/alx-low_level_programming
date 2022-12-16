#include "main.h"

/**
 * jack_bauer - Prints every minute of jack bauer day
 * starting from 0:00 to 2359
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour <= 23; hour++)
	{
		_putchar((hour / 10) + '0');
		_putchar((hour % 10) + '0');
		_putchar(':');
	}
	for (minute = 0; minute <= 59; minute++)
	{
		_putchar((minute / 10) + '0');
		_putchar((minute % 10) + '0');
		_putchar('\n');
	}
}
