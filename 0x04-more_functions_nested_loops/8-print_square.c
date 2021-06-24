#include "holberton.h"

/**
 * print_square - draws a diagonal line on the terminal
 * @size :- integer value
 * Return: Nothing
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
