#include "main.h"

/**
 * prints 10 times the alphabet, in lowercase
 * followed by a newline
 */
void print-alphabets_x10(void)
{
	char ch;
	int i;

	i=0;

	while (i < 10)
	{
		ch = 'a';
		while (ch < 'z')
		{
			putchar(ch);
			ch++;
		}
		putchar('\n');
		i++;
	}
}
