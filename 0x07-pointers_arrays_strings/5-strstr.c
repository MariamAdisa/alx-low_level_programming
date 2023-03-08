#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @needle: sunbstring to be found
 * @haystack: string to be searched
 *
 * Return: pointer to the beginning of the located substring,
 *         or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *str = needle, *sta = haystack;

	while (*haystack)
	{
		sta = haystack;
		needle = str;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}

		if (*needle == '\0')
			return (haystack);
		haystack = sta + 1;
	}
	return (NULL);
}
