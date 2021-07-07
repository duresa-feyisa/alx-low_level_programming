#include "holberton.h"

/**
 * factorial - Print a factorial of a given number
 *
 * @n: Integeral value which factorail number searched for
 *
 * Return: factorial of @n number
 */


int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
