#include "main.h"

/**
 * *_memcpy - copies memory area fron src to dest
 * @dest: destination
 * @src: source
 * @n: max byte to use
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		dest[i] = src[i];
	}

	return (dest);
}
