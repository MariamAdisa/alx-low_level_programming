#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: pointer to an integer
 * @index: index starting from 0 of the bit you want to set
 * Return: 1 if success else, -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);

	*n |= (1 << index);
	return (1);
}
