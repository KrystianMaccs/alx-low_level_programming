#include "main.h"

/**
 * is_lower - this program prints the alphabet
 *
 * in lower case
 *
 * Return: 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
