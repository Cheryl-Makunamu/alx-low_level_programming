#include "main.h"

/**
 * *_memcpy - function that copies the memory
 * @dest: destination
 * @src: source to copy
 * @n: number of bytes
 *
 * Return: pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}

	return (dest);
}
