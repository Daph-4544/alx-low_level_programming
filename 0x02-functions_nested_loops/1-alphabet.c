#include "stdio.h"

/**
 * prints alphabets in lowercase letters
 */
int main(void)

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

