#include <stdio.h>

/**
 * main - print all alphabets in lowercases
 *
 * Return: 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z' ; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
