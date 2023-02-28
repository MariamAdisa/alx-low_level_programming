#include "main.h"

/**
 * swap_int - swaps values of two integers
 * @a: 1st integer to be swapped
 * @b: 2nd integer to be swapped
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
