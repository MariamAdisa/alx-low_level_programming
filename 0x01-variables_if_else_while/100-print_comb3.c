#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int a1, a2;

	for (a1 = 0; a1 < 9; a1++)
	{
		for (a2 = a1 + 1; a2 < 10; a2++)
		{
			putchar((a1 % 10) + '0');
			putchar((a2 % 10) + '0');

			if (a1 == 8 && a2 == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
