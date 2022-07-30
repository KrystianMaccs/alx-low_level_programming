#include "main.h"
#include <stdlib.h>


/**
 * _strdup - string duplicator function
 * @str: string to be duplicated
 * Return: a string pointer
 *
 * Return: NULL if str in NULL
 * pointer to duplicated string on success
 * NULL if memory was insufficient
 */
char *_strdup(char *str)
{
	unsigned int len, i;
	char *nstr;
	/* check if str is null */
	if (str == NULL)
	{
		return (NULL);
	}
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	nstr = malloc(sizeof(char) * (len + 1));

	/* checks if malloc was successful */
	if (nstr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		nstr[i] = str[i];
	}
	nstr[len] = '\0';
	return (nstr);
}
