#include "main.h"

/**
 * print_line -Draw a straight line
 * @n: number of times
 * return: _
 */

void void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
