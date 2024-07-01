#include "main.h"

/**
 * *_strcpy - function that copies string pointed by src
 * @dest: pointer to the buffer
 * @src: string copied
 *
 * Return: the pointer
 */
char *_strcpy(char *dest, char *src)
{
	int leng, a;

	leng = 0;

	while (src[leng] != '\0')
	{
		leng++;
	}

	for (a = 0; a < leng; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';

	return (dest);
}
