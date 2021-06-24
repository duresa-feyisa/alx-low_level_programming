#include "holberton.h"

/**
 * print_line -  draws a straight line in the terminal
 * @n :- integer value
 * Return: Nothing
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
			_putchar('_');
	}
		_putchar('\n');
}
