#include "main.h"

/**
 * _puts - this function prints a string followed by a
 * new line to the standard output
 * @str: string to be printed
 *
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
