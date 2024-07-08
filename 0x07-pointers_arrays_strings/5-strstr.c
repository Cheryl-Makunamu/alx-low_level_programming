#include "main.h"
#include <stdio.h>

/**
 * *_strstr - function that searches for a substring
 * @haystack: parameter
 * @needle: substring to search for
 *
 * Return: pointer to the substring
 */
char *_strstr(char *haystack, char *needle)
{
	int b, c;

	for (b = 0; haystack[b] != '\0'; b++)
	{
		for (c = 0; needle[c] != '\0'; c++)
		{
			if (haystack[b + c] != needle[c])
				break;
		}
		if (!needle[c])
			return (&haystack[b]);
	}
	return (NULL);
}
