#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 * @str: value to duplicate
 * Return: NULL if string is NULL
 */
char *_strdup(char *str)
{
	int i = 0;
	int j = 1;
	char *s;

	if (str == NULL)
		return(NULL);
	while (str[j])
	{
		j++;
	}
	s = malloc((sizeof(char) * j) + 1);
	if (s == NULL)
		return (NULL);
	while (i < j)
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}


