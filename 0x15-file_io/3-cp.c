#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - function that allocates 1024 bytes to buffer
 * @file: The name of the file
 *
 * Return: pointer to new buffer
 */
char *create_buffer(char *file)
{
	char *b;

	b = malloc(sizeof(char) * 1024);

	if (b == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (b);
}

/**
 * close_file - function that closes file 
 * @fd: the file descriptor
 */
void close_file(int fd)
{
	int cl;

	cl = close(fd);

	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - function that copies the contents of a file
 * @argc: The number of arguments
 * @argv: An array of pointers
 *
 * Return: Zero if true
 *
 * Description: If the argument count is incorrect - exit code 97.
 */
int main(int argc, char *argv[])
{
	int f, to, r, w;
	char *b;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	b = create_buffer(argv[2]);
	f = open(argv[1], O_RDONLY);
	r = read(f , b, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (f == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(b);
			exit(98);
		}

		w = write(to, b, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(b);
			exit(99);
		}

		r = read(f, b, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(b);
	close_file(f);
	close_file(to);

	return (0);

}
