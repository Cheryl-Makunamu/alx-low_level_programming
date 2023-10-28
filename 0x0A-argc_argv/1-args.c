#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argv: arguments of the array
 * @argc: the no of arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	(void) argv;/*ignore*/
		printf("%d\n", argc - 1);

		return (0);
}
