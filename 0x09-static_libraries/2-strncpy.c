#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination string to be copied into
 * @src: source string
 * @n: Maximum number of bytes to be copied from src
 * Return: Pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, src_len = 0;

	while (src[i++])
		src_len++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = src_len; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
