
#include "function_pointers.h"

/**
 * print_name -  that prints a name
 * @name: name to be printed
 * @f: the pointer of funtion print name
 * Return: zero
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}

