#include <stdio.h>
#include "main.h"

/**
 * prints alphabets in lowercase letters
 */
void print_alphabet(void)

{
	char alphabets;

	alphabets = 'a';

	while ( alphabets <= 'z')
	{
		putchar(alphabets);
	        alphabets++;
	}
	putchar('\n');
}
