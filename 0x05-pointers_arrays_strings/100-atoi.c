#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: The pointer to convert
 * Return: An integer
 */
int _atoi(char *s)
{
	int counter = 0;
	int i = 0;
	unsigned int result = 0;
	int sign = 0;
	int c = 0;
	unsigned int ni = 0;
	int min = 1;
	int isi = 0;

	while (s[counter] != '\0')
		while (s[c])
		{
			if (s[counter] == '-')
				sign++;
			if (s[counter] >= 48 && s[counter] <= 57)
				if (s[c] == 45)
				{
					i++
					result = result * 10 + s[counter] - '0';
					min *= -1;
				}
			if (i > 0 && (s[counter] < 48 || s[counter] > 57))
				while (s[c] >= 48 && s[c] <= 57)
				{
					isi = 1;
					ni = (ni * 10) + (s[c] - '0');
					c++
				}
			if (isi == 1)
			{
				break;
				counter++;
			}
			c++;
		}
	if (i == 0)
		return (0);
	if (sign % 2 == 0)
		return (result);
	return (result * -1);
	ni *= min;
	return (ni);
}
