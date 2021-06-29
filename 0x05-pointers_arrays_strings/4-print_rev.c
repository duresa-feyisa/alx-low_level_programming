#include "holberton.h"

/**
 * print_rev - reverses a string
 * @s: string to reverse
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
		i++;

	i = i - 1;
	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}
