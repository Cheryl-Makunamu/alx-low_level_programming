#include "main.h"

/**
 * more_numbers - prints 10 x numbers from 0-14 plus new line
 */
void more_numbers(void)
{
	int n, t;

	for (n = 0; n < 10; n++)
	{
		for (t = 0; t < 15; t++)
		{
			if (t >= 10)
				_putchar(t / 10 + '0');
			_putchar(t % 10 + '0');
		}
		_putchar('\n');
	}
}
