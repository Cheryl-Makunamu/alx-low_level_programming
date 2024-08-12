#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: pointer to the file
 * @text_content: A pointer to a string to write
 *
 * Return: If false returns -1
 */
int create_file(const char *filename, char *text_content)
{
	int p, u, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	p = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(p, text_content, len);

	if (p == -1 || u == -1)
		return (-1);

	close(p);

	return (1);
}
