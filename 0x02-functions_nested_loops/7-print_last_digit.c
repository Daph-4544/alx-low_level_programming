#include "main.h"

/**
 * print_last_digit - function prints the last digit of a numberit of a number
 * @r: integer input
 * Return: value of the last digit
 */
int print_last_digit(int r)
{
	int n;

	if (r >= 0)
	{
		n = r % 10;
	}
	else
	{
		n = (r % 10) * -1;
	}
	_putchar(n + '0');
	return (n);
}
