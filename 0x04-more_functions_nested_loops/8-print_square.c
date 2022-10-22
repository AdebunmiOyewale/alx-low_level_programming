#include "main.h"

/**
 * print_square - Print a square
 * @size: the size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	int a, c;

	if (size <= 0)
		_putchar('\n');
	for (a = 0; a < size; a++)
	{
		for (c = 0; c < size; c++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
