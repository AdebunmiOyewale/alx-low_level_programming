#include <stdio.h>
#include "main.h"

/**
 * main - print the num 1 - 100,
 * for multiples of 3 Fizz, for multiples of 5 Buzz
 * for multiples of both, and for multiples of both FizzBuzz
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");

		else
			printf("%i", i);
		if (i < 100)
			printf(" ");
	}
	printf('\n');
	return (0);
}
