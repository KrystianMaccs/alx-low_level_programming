#include "main.h"

/**
 * separator - checks if character is a separator
 * @c: character to be checked
 * Return: if separator return 1. Otherwise resturn 0;
 */

int separator(char c)
{
	/*Declaring condition switch*/
	switch (c)
	{
		case ' ':
		case '\t':
		case '\n':
		case ',':
		case ';':
		case '.':
		case '!':
		case '?':
		case '"':
		case '(':
		case ')':
		case '{':
		case '}':
			return (1);

		default:
			return (0);
	}
}

/**
 * *cap_string - function
 * @s: pointer
 * Return: pointer to function
 */

char *cap_string(char *s)
{
	int count, upper;

	upper = -32; /*value constant*/

	count = 0;
	/*start WHILE*/
	while (s[count] != '\0')
	{
		/*letters lowercase*/
		if (s[count] >= 'a' && s[count] <= 'z')
		{
			/*convert uppercase*/
			if (s[count] == *s || separator(s[count - 1]))
				s[count] += upper;
		}
		count++; /*Add count*/
	}
	return (s);
}
