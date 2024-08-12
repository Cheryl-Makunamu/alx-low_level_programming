#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function that reads a text file and prints it
 * @filename: A pointer to the name of the file
 * @letters: The number of letters
 *
 * Return: Zero
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *b;

	if (filename == NULL)
		return (0);

	b = malloc(sizeof(char) * letters);
	if (b == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, b, letters);
	w = write(STDOUT_FILENO, b, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(b);
		return (0);
	}

	free(b);
	close(o);

	return (w);
}
