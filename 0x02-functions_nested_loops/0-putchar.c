#include "main.h"

/**
 * main - A program that prints
 * __putchar followed by a new line
 * Return: 0 Always (Success)
 */
int main(void)
{
	char putch[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};

	unsigned int c;

	for (c = 0; c < sizeof(putch); c++)
	{
		_putchar(putch[c]);
	}

	_putchar('\n');

	return (0);
}
