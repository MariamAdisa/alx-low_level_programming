#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated
 *           space in memory which contains a copy of the string
 *           given as a parameter.
 * @str: input string
 *
 * Return: NULL if str = NULL or if insufficient memory otherwise,
 *         pointer to a duplicated string
 */
char *_strdup(char *str)
{
	char *s;
	int i, length = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		length++;

	s = malloc(sizeof(char) * (length + 1));

	if (s == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		s[i] = str[i];

	s[length] = '\0';

	return (s);
}
