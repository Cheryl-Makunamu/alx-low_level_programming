#include "main.h"

/**
 * _strncat - function that concatenates n bytes from string
 * @dest: destination
 * @src: source
 * @n: number of bytes
 *
 * Return: a pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	b = 0;

	while (dest[a] != '\0')
		a++;

	while (src[b] != '\0' && b < n)
	{
		dest[a] = src[b];
		a++;
		b++;
	}

	dest[a] = '\0';

	return (dest);
}
