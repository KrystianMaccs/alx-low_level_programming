#include <stdio.h>
#include "main.h"

/**
 * main - Prints the name of the program
 * @argc: Count arguments
 * @argv: Arguments to be counted
 * Return: Always 0 (Success)
 */int main(int argc, char *argv[])
{
	(void) argv; /* Ignore argv */
	printf("%i\n", argc - 1);

	return (0);
}
