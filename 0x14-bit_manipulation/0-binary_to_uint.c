#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: 0 if there is one or more chars in the string b that is not 0 or 1
 *         or b is NULL
 *         else, the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 1, result = 0, length;

	if (b == NULL)
		return (0);

	for (length = 0; b[length];)
		length++;

	while (length)
	{
		if (b[length - 1] != '1' && b[length - 1] != '0')
			return (0);

		if (b[length - 1] == '1')
			result += num;
		num *= 2;
		length--;
	}

	return (result);
}
