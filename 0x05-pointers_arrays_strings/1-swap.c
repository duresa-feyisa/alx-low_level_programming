#include "holberton.h"

/**
 * swap_int - swapping values of variable
 * @a :- pointer
 * @b :- pointer
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
