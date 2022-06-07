#include <stdio.h>
#include "main.h"

/**
 * print_alphabet  - print a - z in alphabetical oreder
 * followed by a next line
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
