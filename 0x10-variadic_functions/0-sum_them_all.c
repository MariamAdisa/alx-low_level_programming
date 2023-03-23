#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of parameters
 * Return: sum of parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list all_parameters;
	unsigned int i, sum = 0;

	va_start(all_parameters, n);

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			sum += va_arg(all_parameters, int);
	}

	va_end(all_parameters);

	return (sum);
}
