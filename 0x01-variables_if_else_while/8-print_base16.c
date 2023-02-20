#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
		putchar((i % 10) + '0');

	for (j = 'a'; j <= 'f'; j++)
		putchar(j);

	putchar('\n');

	return (0);
}
