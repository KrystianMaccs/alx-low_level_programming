#include <stadio.h>
#include <ctype.h>

/**
 * main - Entry point
 * Return: 0 Always (Success)
 */
int main(void)
{
	int letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0)
}
