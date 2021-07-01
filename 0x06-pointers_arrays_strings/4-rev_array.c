#include "holberton.h"
/**
 * reverse_array - reverses the contents of an array
 * @a: integer array to be reversed
 * @n: length of array a
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0, j = 0, b[100];

	while (i < n)
	{
		b[i] = *(a + i);
		i++;
	}
	i = i - 1;
	while (j < n)
	{
		*(a + j) = b[i];
		i--;
		j++;
	}
}
