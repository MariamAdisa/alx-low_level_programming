#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @n: number of bytes to be copied
 * @src: memory area to be copied from
 * @dest: memory area to be copied to
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *destination = dest;
	char *source = src;

	for (i = 0; i < n; i++)
		destination[i] = source[i];

	return (dest);
}
