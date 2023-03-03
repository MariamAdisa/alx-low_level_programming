#include "main.h"

/**
 * string_toupper - changes lowercase in astring to uppercase
 * @s: character string
 * Return: converted string
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;

		i++;
	}

	return (s);
}
