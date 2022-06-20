<<<<<<< HEAD
#include "main.h"

/**
 *  _memcpy - memset function
 *  @dest: start point of string to change
 *  @src: value that will replace
 *  Return: changed pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest1 = dest;
	char *src1 = src;

	for (; n != 0; dest1++, n--, src1++)
		*dest1 = *src1;
	return (dest);
}
=======
#include "main.h"

/**
 * _memcpy - memset function
 * @dest: start point of string to change
 * @src: value that will replace
 * @n: number of bytes to change
 * Return: changed pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest1 = dest;
	char *src1 = src;

	for (; n != 0; dest1++, n--, src1++)
		*dest1 = *src1;
	return (dest);
}
>>>>>>> 4e5f773f96fdc84efd2669f55c3892404e5d5735
