#include "holberton.h"
#include <ctype.h>
/**
 * _islower - Entry point
 *
 * @c: - ascii integer value of the character
 *
 * Return: 1 if lowercase, 0 if uppercase
 */
int _islower(int c)
{
	int result;

	result = islower(c);
	if (result == 0)
		result = 0;
	else
		result = 1;
	return (result);
}
