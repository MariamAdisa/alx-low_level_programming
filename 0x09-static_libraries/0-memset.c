#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area pointed to by s
 *           with the constant byte b
 * @n: number of bytes to be filled
 * @s: pointer to the memory area to be filled
 * @b: character to fill the memory area with
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	char *memory = s, variable = b;

	for (i = 0; i < n; i++)
		memory[i] = variable;

	return (memory);
}
