#include "main.h"

/**
 * _strlen - this function returns the length of a string
 *
 * @s: string whose value is to be counted
 * Return: 0
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}

