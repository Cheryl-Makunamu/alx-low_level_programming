#include "main.h"

/**
 * _strlen_recursion - function to return length of string
 * @s: parameter to check
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}


