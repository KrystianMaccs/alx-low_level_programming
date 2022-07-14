#include "main.h"

/**
 * _strncat - function
 * @dest: char
 * @src: char
 * @n: int
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	i = 0;

	while (*(dest + i))
	{
		i++;
	}
	while (*(src + j) != '\0' && j < n)
	{
		*(dest + i) = src[j];
		i++;
		j++;
	}
	return (dest);
}
