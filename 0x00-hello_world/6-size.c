#include <stdio.h>
/**
 * main - print the sizes of data types in C
 *this code by Joshua
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("size ofa char: %zu byte(s)\n", (unsigned long)sizeof(a));
	printf("size of an int: %zu byte(s)\n", (unsigned long)sizeof(b));
	printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("size of a float: %zu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
