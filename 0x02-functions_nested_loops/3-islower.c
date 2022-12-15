#include "main.h"
/**
 * _islower - Will check for lowercase characters
 * @c: Represents the character being checked
 * Return: 1 if c is lowercase, otherwise 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
