#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: 1st number to be added
 * @n2: 2nd number to be added
 * @r: buffer that the function will use to store the result
 * @size_r: buffer size
 *
 * Return: pointer to the result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, n1_len = 0, n2_len = 0;

	for (i = 0; *(n1 + i); i++)
		n1_len++;

	for (i = 0; *(n2 + i); i++)
		n2_len++;

	if (size_r <= n1_len + 1 || size_r <= n2_len + 1)
		return (0);

	n1 += n1_len - 1;
	n2 += n2_len - 1;
	*(r + size_r) = '\0';

	return (r);
}
