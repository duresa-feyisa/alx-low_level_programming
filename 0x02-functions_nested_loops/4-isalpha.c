#include "holberton.h"
#include <ctype.h>
/**
 * _isalpha - Entry point
 *
 * @c: - ascii integer value of the character
 *
 * Return: 1 if lowercase and uppercase, 0 neither
 */
int _isalpha(int c)
{
	int result;

	result = isalpha(c);
	if (result == 0)
		result = 0;
	else
		result = 1;
	return (result);
}
