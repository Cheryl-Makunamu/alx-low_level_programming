#include "main.h"

/**
 * _strcat - joins 2 strings end to end
 * @dest: string one
 * @src: string two
 *
 * Return: a pointer to joined string
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	b = 0;

	while (dest[a] != '\0')
		a++;

	while (src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}

	dest[a] = '\0';

	return (dest);
}
