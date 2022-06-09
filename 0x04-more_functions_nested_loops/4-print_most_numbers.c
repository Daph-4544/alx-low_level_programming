#include "main.h"

/**
 * print_most_numbers - function to print digit 0-9
 * minus 2 & 4
 *
 * Return: Always 0.
 */

void print_most_numbers(void)
{
	char n = '0';

	while (n <= '9')
	{
		if (n != '2' && n != '4')
		{
			_putchar(n);
		}

		n++;
	}
	_putchar('\n');
}
