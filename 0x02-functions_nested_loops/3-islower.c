#include "main.h"

/**
 * lower alphabet - this programs prints letters in lower case
 * Return: 0 Always (Success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
