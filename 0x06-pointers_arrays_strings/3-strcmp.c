#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: 1st string to be compared
 * @s2: 2nd string to be compared
 * Return: difference between s1 and s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
