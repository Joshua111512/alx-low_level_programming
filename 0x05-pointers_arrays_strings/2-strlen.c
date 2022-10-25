#include "main.h"
/**
 * _strlen - return the lengh of a string
 * Owned by Joshua/Odiba
 * @s: char to be checked
 * Description: This will return the length of a string
 * Return: 0
 */
int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
