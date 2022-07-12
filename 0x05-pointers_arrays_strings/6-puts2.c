#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - this function prints every other character of
 * a string, starting with the first character followed
 * by a new line
 *
 * @str: pointer to char
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			printf("%c", str[i]);
		}
		i++;
	}
	printf("\n");
}
