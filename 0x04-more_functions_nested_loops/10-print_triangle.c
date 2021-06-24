#include "holberton.h"

/**
 * print_triangle -  draws a straight line in the terminal
 * @size :- integer value
 * Return: Nothing.
 */
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size; j > 1; j--)
			{
				if (j <= i)
					_putchar('#');
				else
					_putchar(' ');
			}
			_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
