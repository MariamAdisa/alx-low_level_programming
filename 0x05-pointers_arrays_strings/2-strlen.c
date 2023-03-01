#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: string to be measured
 * Return: Length of the string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;

	return (length);
}
