#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - function that copies astring
 * @str: parameter
 *
 * Return: pointer to string copied
 */
char *_strdup(char *str)
{
	char *cop;
	unsigned int x, len;

	x = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	cop = malloc(sizeof(char) * (len + 1));

	if (cop == NULL)
		return (NULL);

	while ((cop[x] = str[x]) != '\0')
		x++;

	return (cop);
}

