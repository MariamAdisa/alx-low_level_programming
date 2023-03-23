#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers -  function that prints numbers, followed by a new line.
 * @n: number of integers passed to the function
 * @separator: string to be printed between numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list all_parameters;
	unsigned int i;

	va_start(all_parameters, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(all_parameters, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	va_end(all_parameters);

	printf("\n");
}
