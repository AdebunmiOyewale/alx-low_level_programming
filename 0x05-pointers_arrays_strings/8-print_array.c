#include "main.h"
#include <stdio.h>

/**
 * print_array -  prints n elements of an array of integers
 * @a: a pointer to an int
 * @n: an integer
 *
 * Return: 0 is success
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{

		if (j != n - 1)
		{
			printf("%d, ", a[j]);
		}
		else
		{
			printf("%d", a[j]);
		}
	}
	printf("\n");
}
