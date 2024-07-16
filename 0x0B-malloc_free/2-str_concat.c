#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - function that concatenates 2 strings
 * @s1: parameter 1
 * @s2: parameter 2
 *
 * Return: pointer to the joined string
 */
char *str_concat(char *s1, char *s2)
{
	char *xy;
	unsigned int x = 0, y = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	xy = malloc(sizeof(char) * (len1 + len2 + 1));
	if (xy == NULL)
		return (NULL);

	x = 0;
	y = 0;

	if (s1)
	{
		while (x < len1)
		{
			xy[x] = s1[x];
			x++;
		}
	}

	if (s2)
	{
		while (x < (len1 + len2))
		{
			xy[x] = s2[y];
			x++;
			y++;
		}
	}
	xy[x] = '\0';

	return (xy);
}
