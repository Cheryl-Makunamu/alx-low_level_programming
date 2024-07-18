#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - function that concatenates string to string
 * @s1: string one
 * @s2: string two
 * @n: number of bytes
 *
 * Return: pointer to result
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ss;
	unsigned int x = 0, y = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		ss = malloc(sizeof(char) * (len1 + n + 1));
	else
		ss = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!ss)
		return (NULL);

	while (x < len1)
	{
		ss[x] = s1[x];
		x++;
	}

	while (n < len2 && x < (len1 + n))
		ss[x++] = s2[y++];

	while (n >= len2 && x < (len1 + len2))
		ss[x++] = s2[y++];

	ss[x] = '\0';

	return (ss);
}
