#include "main.h"

/**
 * swap_int - this functions swaps the value of
 * two integer
 *
 * @a: first int
 * @b: second int
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int num;

	num = *a;
	*a = *b;
	*b = num;
}
