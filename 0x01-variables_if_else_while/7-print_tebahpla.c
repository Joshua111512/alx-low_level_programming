#include <stdio.h>

/**
 * main - Print lowercase alphabets in reverse
 *
 * Return: 0
 */
intt main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchaar(letter);

	putchar('\n');

	return (0);
}
