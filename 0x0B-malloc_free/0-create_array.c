#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it
 *                with a specific character.
 * @size: size of char
 * @c: input character
 *
 * Return: NULL if size = 0 or pointer to the array if NULL fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	array = malloc(sizeof(char) * size);

	if (size == 0)
		return (NULL);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
