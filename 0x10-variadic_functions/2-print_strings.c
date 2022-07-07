#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: is the string to be printed between numbers
 * @n: is the number of integers passed to the function
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *s;

	separator = (separator != NULL) ? separator : "";

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (i > 0)
		{
			printf("%s", separator);
		}

		s = va_arg(ap, char *);

		if (s == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", s);
		}
	}
	putchar('\n');
}
