#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Determine if last digit of a variable is greater than
 * or less than 5, or is equal to 0
 *
 * Return: 0 (Always Success)
 */
int main(void)
{
	int n;

	int L;

	char last[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	L = n % 10;

	if (L > 5)
	{
		printf("%s %d is %d and is greater than 5\n", last, n, L);
	}
	else if (L == 0)
	{
		printf("%s %d is %d and is 0\n", last, n, L);
	}
	else
	{
		printf("%s %d is %d and is less than 6 and not 0\n", last, n, L);
	}
	return (0);
}
