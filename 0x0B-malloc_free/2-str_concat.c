#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Return: pointer to to a newly allocated space in memory which contains
 *         the contents of s1, followed by the contents of s2
 *         and null terminated
 *         if NULL, treat as an empty string
 */

char *str_concat(char *s1, char *s2)
{
	int i, concat_i = 0, length = 0;
	char *concat_str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		length++;

	concat_str = malloc(sizeof(char) * length);

	if (concat_str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		concat_str[concat_i++] = s1[i];

	for (i = 0; s2[i]; i++)
		concat_str[concat_i++] = s2[i];

	return (concat_str);
}

