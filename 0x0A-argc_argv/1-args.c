#include <stdio.h>

/**
 * main - prints a number followed by a new line
 * @argc: argument count
 * @argv: argument value passed into the code
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argv[0])
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
