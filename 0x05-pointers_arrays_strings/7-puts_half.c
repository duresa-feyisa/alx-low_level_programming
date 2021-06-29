#include "holberton.h"
/**
 * puts_half -  prints half of a string
 * @str: string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i = 0, n;

	while (*(str + i) != '\0')
		i++;

	n = i;

	if (n % 2 == 0)
		n = n / 2;
	else
		n = (n + 1) / 2;

	while (n < i)
	{
		_putchar(*(str + n));
		n++;
	}
	_putchar('\n');
}
