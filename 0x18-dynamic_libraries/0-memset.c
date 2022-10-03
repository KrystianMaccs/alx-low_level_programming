#include "main.h"
#include <string.h>

/**
 * _memset - fill memory with constant byte
 * @s: pointer to char
 * @b: parameter b
 * @n: number of bytes
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
