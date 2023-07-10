#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @letters:  number of letters it should read and print
 * @filename: pointer to the name of the file
 *
 * Return: actual number of letters it could read and print else
 *         0 if file cannot be opened or read or
 *         if filename is NULL or
 *         write fails or does not write the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *temp;

	if (filename == NULL)
		return (0);

	temp = malloc(sizeof(char) * letters);

	if (temp == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, temp, letters);
	w = write(STDOUT_FILENO, temp, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(temp);
		return (0);
	}

	free(temp);
	close(o);

	return (w);
}
