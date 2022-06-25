#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: An input character
 * Description: function _islower
 * Return: 1 if c is lowercase and 0 if otherwise.
 */
int _islower(int c)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == c)
			return (1);
	}
	return (0);
}
