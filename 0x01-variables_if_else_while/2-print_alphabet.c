#include <stdio.h>
#include <stdlib.h>
/**
 * main - Print alphabet using lowercase and putchar
 *
 * Return: 0
 */
int main(void)
{
	char i;

	putchar("\n\nLower case characters:\n");
	for (i = 'a'; i <= 'z'; i++)
		putchar("%c", i);
	return (0);
}
