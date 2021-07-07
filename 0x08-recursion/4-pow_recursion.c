#include "holberton.h"

/**
 * _pow_recursion - Print value of x raised to the power of y
 *
 * @x: base value
 * @y: exponent value
 *
 * Return: @x raised by @y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
