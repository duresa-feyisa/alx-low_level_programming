#include "holberton.h"

/**
 * print_sign - Entry point
 *
 * @n: - ascii integer value of the character
 *
 * Return: 1 if n>0, 0 if n==0, -1 if n<0
 */
int print_sign(int n)
{
	int result;

	if (n > 0)
	{
		result = 1;
		_putchar(43);
	}
	else if (n == 0)
	{
		result = 0;
		_putchar(48);
	}
	else
	{
		result = -1;
		_putchar(45);
	}
return (result);
}
