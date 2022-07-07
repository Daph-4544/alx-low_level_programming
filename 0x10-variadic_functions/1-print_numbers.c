#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: is the string to be printed between numbers
 * @n: is the number of integers passed to the function
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;

	unsigned int i;

	separator = (separator != NULL) ? separator : "";

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (i > 0)
		{
			printf("%s", separator);
		}
		printf("%d", va_arg(ap, int));
	}
	printf("\n");
}
