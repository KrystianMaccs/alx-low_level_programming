#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * Return: 0 Always (Success)
 */
void print_to_98(int n)
{
	if (n <= 98)
		while (n <= 98)
		{
			printf("%d", n);
			if (n == 98)
			{
				printf("\n");
				break;
			}
			printf(", ");
			n++;
		}
	else
		while (n >= 98)
		{
			printf("%d", n);
			if (n == 98)
			{
				printf("\n");
				break;
			}
			printf(", ");
			n--;
		}
}
