#include "main.h"
/**
 * main- Uses print_alphabet as the main function
 * print_alphabet -The print_alphabet function does not return
 * a value. It prints out all alphabet letters in lowercase
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
