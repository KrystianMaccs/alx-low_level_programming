#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 * Return: 0 Always (Success)
 */
int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		letter = tolower(letter);
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
