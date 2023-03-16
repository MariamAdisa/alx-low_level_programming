#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: 1st string
 * @s2: 2nd string
 * @n: input string
 * Return: pointer to a newly allocated space in memory, which contains s1
 *         followed by the first n bytes of s2, and null terminated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int len = n, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;

	new_str = malloc(sizeof(char) * (len + 1));

	if (new_str == NULL)
		return (NULL);

	len = 0;

	for (i = 0; s1[i]; i++)
		new_str[len++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		new_str[len++] = s2[i];

	new_str[len] = '\0';

	return (new_str);
}
