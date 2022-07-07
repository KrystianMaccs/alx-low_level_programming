#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 *
 * @c: return char type
 *
 * Return 0 on success and 1 on fail
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
