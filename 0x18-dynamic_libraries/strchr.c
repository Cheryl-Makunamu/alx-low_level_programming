#include "main.h"
#include <stdio.h>

/**
 * *_strchr - function to search for char in string
 * @s: string to search
 * @c: char
 *
 * Return: a pointer to the string
 */
char *_strchr(char *s, char c)
{
		int x;

		while (1)
		{
			x = *s++;
			if (x == c)
			{
				return (s - 1);
			}
			if (x == 0)
			{
				return (NULL);
			}
		}
}
