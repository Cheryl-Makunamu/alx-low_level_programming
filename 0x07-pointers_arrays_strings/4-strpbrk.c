#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - function that search for a string
 * @s: parameter
 * @accept: string containing the bytes to compare
 *
 * Return: pointer to s
 */
char *_strpbrk(char *s, char *accept)
{
	int a, b;

	for (a = 0; *s != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (*s == accept[b])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
