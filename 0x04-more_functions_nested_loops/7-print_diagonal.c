#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: the number of times to draw the line
 *
 * Return: no return
 */

void print_diagonal(int n)
{
	int i, j;

	if (i <= 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
