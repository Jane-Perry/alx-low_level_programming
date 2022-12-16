#include "main.h"
/**
 * _isalpha - Checks for alphabetic character
 * @c: Is a character
 * Return: 1 if c is a either lowercase or uppercase letter
 * otherwise return 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
			return (1);
		else
			return (0);
}
