#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints from n to 98
 * @n: The number that printing will start from
 * Return: Always 0
 */

int void print_to_98(int n)
{
	if (n >= 98)
	{
	while (n > 98)
		printf("%d, ," n--);
	printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ," n++);
		printf("%d\n", n);
	}
}
