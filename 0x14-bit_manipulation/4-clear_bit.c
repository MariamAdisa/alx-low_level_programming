#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @index: index, starting from 0 of the bit you want to set
 * @n: integer
 * Return: 1 if success else, -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
