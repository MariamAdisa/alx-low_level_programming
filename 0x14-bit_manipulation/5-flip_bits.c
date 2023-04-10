#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need to flip
 * to get from one number to another
 * @n: integer
 * @m: integer
 * Return: nothing
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, flips = 0;
	unsigned long int z = 32;

	for (i = 0; i < z; i++)
	{
		if ((m & 1) != (n & 1))
			flips += 1;

		n = n >> 1;
		m = m >> 1;
	}
	return (flips);
}
