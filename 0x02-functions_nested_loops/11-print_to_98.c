#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - Entry point
 *
 * @n: - integer value
 *
 * Return: void
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		if (n >= 98)
		{
			printf("%d, ", n);
			n--;
		}
		else if (n <= 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	if (n == 98)
	{
		printf("98");
	}
	printf("\n");
}
