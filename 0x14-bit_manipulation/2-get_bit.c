#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: input integer
 * @index: index starting from 0 of the bit to be gotten
 * Return: the value of the bit at index or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int z;

	z = (n >> index);

	if (index > 32)
		return (-1);

	else
		return (z & 1);
}
