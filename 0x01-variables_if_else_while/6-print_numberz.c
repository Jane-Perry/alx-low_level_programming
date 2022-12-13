#include <stdio.h>
#include <stdlib.h>
/**
 * main - Print numbers from 0 using putchar
 *
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');
	return (0);
}
