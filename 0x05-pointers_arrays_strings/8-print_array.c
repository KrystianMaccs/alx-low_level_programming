#include "main.h"
#include <stdio.h>

/**
 * print_array - this functions prints n element of an
 * array of an integer followed by a new line
 *
 * @a: pointer to char
 * @n: number of elements of array to be printed
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
