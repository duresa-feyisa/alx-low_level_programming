#include "holberton.h"
#include <stdlib.h>
/**
 * print_last_digit - Entry point
 *
 * @n: - integer value
 *
 * Return: if result > 0
 */
int print_last_digit(int n)
{
	int result, a;

	a = n % 10;
	result = abs(a);
	_putchar(result + '0');

	return (result);
}
