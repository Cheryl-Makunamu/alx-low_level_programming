#include <stdlib.h>
#include "main.h"

/**
 * count_word - function to count the number of words in string
 * @s: parameter
 *
 * Return: the number of words
 */
int count_word(char *s)
{
	int f, x, y;

	f = 0;
	y = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == ' ')
			f = 0;
		else if (f == 0)
		{
			f = 1;
			y++;
		}
	}

	return (y);
}
/**
 * **strtow - function to split string into words
 * @str: parameter
 *
 * Return: pointer to strings
 */
char **strtow(char *str)
{
	char **m, *tmp;
	int x, y = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	m = (char **) malloc(sizeof(char *) * (words + 1));
	if (m == NULL)
		return (NULL);

	for (x = 0; x <= len; x++)
	{
		if (str[x] == ' ' || str[x] == '\0')
		{
			if (c)
			{
				end = x;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				m[y] = tmp - c;
				y++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = x;
	}

	m[y] = NULL;

	return (m);
}

