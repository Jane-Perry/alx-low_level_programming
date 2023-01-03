#include "main.h"

/**
 * _strncat -concatenates two strings
 *
 * @dest: dest of the string
 * @src: source of string
 * @n: The length of the integer
 * Return: pointer to the string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *s = dest;
	int i, j;

	while (*dest != '\0')
		for (i = 0; dest[i] != '\0'; i++)
		{
			dest++;
			continue;
		}
	while (*src != '\0')
		for (j = 0; src[j] != '\0' && j < n; j++)
		{
			*dest = *src;
			dest++;
			src++;
			dest[i + j] = src[j];
		}
	*dest = '\0';
	return (s);
	dest[i + j] = '\0';
	return (dest);
}
