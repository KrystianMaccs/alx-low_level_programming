#include "main.h"

/**
 * main - Entry point
 * Return: 0 Always (Success)
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i <= 9)
	{
		char c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
