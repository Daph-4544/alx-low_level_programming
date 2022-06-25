#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: input
 * Return: 1 if c is lowercase or uppercase and 0 if is any other alphabet
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
