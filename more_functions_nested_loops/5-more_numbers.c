#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14, then a new line
 */
void more_numbers(void)
{
	int row;
	int n;

	row = 0;
	while (row < 10)
	{
		n = 0;
		while (n <= 14)
		{
			if (n >= 10)
				_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			n++;
		}
		_putchar('\n');
		row++;
	}
}
