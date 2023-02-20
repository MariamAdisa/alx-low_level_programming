#include <stdio.h>

/**
 * main - Print alphabets in lowercase except q and e
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'q' && i != 'e')

			putchar(i);
	}

	putchar('\n');

	return (0);
}
