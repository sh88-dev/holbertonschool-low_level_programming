#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times,
 * each followed by a new line
 */
void print_alphabet_x10(void)
{
	int row;
	char letter;

	for (row = 0; row < 10; row++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
