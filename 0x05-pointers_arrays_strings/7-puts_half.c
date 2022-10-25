#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to be printed
 *
 * Return: 0 is success
 */
void puts_half(char *str)
{
	int string = 0, u;

	while (str[string] != '\0')
		string++;

	if (string + 1 % 2 != '\0')
		u = (string - 1) / 2;

	else
		u = (string / 2);

	u++;

	for (string = u; str[string] != '\0'; string++)
		_putchar(str[string]);
	_putchar('\n');
}
