#include "main.h"

/**
 * main - Print alphabet in lowercase
 *
 * Return: 0
 */
void print_alphabet(void);
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}