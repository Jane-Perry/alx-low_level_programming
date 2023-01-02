#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - writes the char c to stdout
 * @c: Character to print
 * Return: 1
 */

int _putchar(char c)
{
	return (write(1, c));
}
