#include "main.h"

/**
 * more_numbers - Print num from 0 to 14, 10 times
 *
 * Return: no return
 */

void more_numbers(void)
{
	int c, d;

	for (c = 1; c < 10; c++)
	{
		for (d = 0; d <= 14; d++)
		{
			if (d > 9)
				_putchar((d / 10) + '0');
				_putchar((d % 10 + '0');
		}
		_putchar('\n');
	}
}
