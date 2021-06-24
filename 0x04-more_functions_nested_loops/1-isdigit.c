#include "holberton.h"

/**
 * _isdigit - Checks for digit character
 * @c: - The character to be checked
 * Return: 1 for digit, 0 for anything else
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

