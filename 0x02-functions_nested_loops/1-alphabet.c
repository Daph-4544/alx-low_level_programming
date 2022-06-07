#include "stdio.h"

/**
 * prints alphabets in lowercase letters
 */
void print_alphabet(void)

{
	char alphabets;

	alphabets = 'a';

	while ( alphabets <= 'z')
	{
		_putchar(alphabets);
		alphabets++;
	}
	_putchar('\n');
}
