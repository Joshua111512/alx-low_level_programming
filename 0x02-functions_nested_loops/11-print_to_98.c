#include "main.h"

/**
 * print_to_98 - Prints all natural numbers starting from imput to 98,
 * in order seperated by a comma followed by a space.
 * @n: The number of which the counting commences.
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
