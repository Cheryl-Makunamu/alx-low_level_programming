#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - copies string pointed by src
 * @dest: check paameter
 * @src: check parameter
 * Return: dest_start..
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (dest_start);
}
