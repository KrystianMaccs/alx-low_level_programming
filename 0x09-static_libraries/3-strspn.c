#include "main.h"
#include <string.h>

/**
 * _strspn - returns length of prefix substring
 * @s: parameter s
 * @accept: parameter accept
 * Return: length of prefix substring
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
