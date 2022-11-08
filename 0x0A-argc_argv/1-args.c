#include <stdio.h>
#include <stdlib.h>

/**
 * main -  prints the number of arguments passed into it
 *
 * @argc: argument count
 * @argv: argument
 *
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)

		printf("%d\n", argc - 1);

	return (0);
}
