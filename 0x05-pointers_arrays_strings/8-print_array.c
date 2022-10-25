#include "main.h"
#include <stdio.h>
/**
 * print_array - Prints n element of an array of integers
 * Owned by Joshua/Odiba
 * @a: int to check
 * @n: int to check
 * Return: 0
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
		if (x != n - 1)
			_putchar("%d, ", a[x]);
		else
			_putchar("%d", a[x]);
	_putchar('\n');
}
