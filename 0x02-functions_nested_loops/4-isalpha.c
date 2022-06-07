#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: input
 * Return: 1 if c is lowercase or uppercase and 0 if is any other alphabet
 */
int _isalpha(int c)
{
	char lower_case, upper_case;

	for (lower_case = 'a'; lower_case <= 'z'; lower_case++)
	{
		for (upper_case = 'A'; upper_case <= 'Z'; upper_case++)
		{
			if (c == lower_case || c == upper_case)
			{
				return (1);
			}
		}
	}
	return (0);
}
