#include "main.h"

/**
 * more_numbers - function to print digit 1-14x10
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	char num;
	int lines;

	for (lines = 0; lines <= 9; lines++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num / 10 > 0)
			{
				_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');
		}

		_putchar('\n');
	}
}
