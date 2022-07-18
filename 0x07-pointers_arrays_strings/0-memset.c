#include "main.h"
#include <string.h>

/**
 * _memset - fill memory with constant byte
 * @s: pointer to char
 * @b: a parameter
 * @i: number of bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
