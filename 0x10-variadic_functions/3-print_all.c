#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 *
 * @format: is a list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int x = 0;
	char *k;
	char *sep = ", ";

	va_start(ap, format);

	while ((format != NULL) && *(format + x) != '\0')
	{
		switch (*(format + x))
		{
			case 's':  /* string */
				k = va_arg(ap, char *);
				k = (k != NULL) ? k : "(nil)";
				printf("%s", k);
				break;
			case 'i':  /* int */
				printf("%i", va_arg(ap, int));
				break;
			case 'c':  /* char */
				/* need a cast here since va_arg only takes fully promoted types */
				printf("%c", va_arg(ap, int));
				break;
			case 'f':  /* float */
				printf("%f", va_arg(ap, double));
				break;
			default:   /* if it does not comply with any of the cases */
				x++;
				continue;
		}
		if (*(format + x + 1) != 0)
		{
			printf("%s", sep);
		}
		x++;
	}
	putchar('\n');
	va_end(ap);
}
