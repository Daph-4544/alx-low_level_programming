#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to extract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int n)
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
