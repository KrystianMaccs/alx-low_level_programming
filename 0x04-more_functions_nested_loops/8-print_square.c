#include n"main.h"

/**
 * print_square - prints10 times the square from 0 to 14
 * @size: integer argument
 * Return: void
 */

void print_square(int size)
{
	int i = 0, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < size)
		{
			j = 0;

			while (j < size)
			{
				_putchar('#');

				j++;
			}
			_putchar('\n');

			i++;
		}
	}
}
