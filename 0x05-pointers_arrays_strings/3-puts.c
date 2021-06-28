#include "holberton.h"

/**
 * _puts - prints a string
 * @str :- pointer
 * Return: Nothing
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
