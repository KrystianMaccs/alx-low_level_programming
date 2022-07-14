#include "main.h"
#include <ctype.h>

/**
 * *string_toupper - changes all lowercase strings to uppercase
 * @s: source string
 * Return: uppercase string
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		s[i] = toupper(s[i]);

		i++;
	}
	return (s);
}
