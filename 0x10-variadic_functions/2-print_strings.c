#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - function that prints strings, followed by a new line.
 * @n: number of strings passed to the function
 * @separator: string to be printed between the strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list all_parameters;
	unsigned int i;
	char *str;

	va_start(all_parameters, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(all_parameters, char *);

		if (str == NULL)
			printf("(nil)");

		else
			printf("%s", str);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	va_end(all_parameters);

	printf("\n");
}
