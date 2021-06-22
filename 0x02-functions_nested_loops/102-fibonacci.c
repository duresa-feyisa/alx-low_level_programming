#include "holberton.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int t1, t2, t3, i;

	t1 = 1;
	t2 = 2;
	t3 = t1 + t2;
	printf("%d, %d, ", t1, t2);
	for (i = 1; i < 49; i++)
	{
		printf("%d, ", t3);
		t1 = t2;
		t2 = t3;
		t3 = t1 + t2;
	}
	printf("\n");
	return (0);
} 
