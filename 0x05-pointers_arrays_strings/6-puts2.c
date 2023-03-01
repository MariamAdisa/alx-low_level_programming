#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with the first character, followed by a new line
 * @str: input string to be printed
 */

void puts2(char *str)
{
	int first = 0, i = 0;

	while (str[first++])
		i++;

	for (first = 0; first < i; first += 2)
		_putchar(str[first]);

	_putchar('\n');
}
