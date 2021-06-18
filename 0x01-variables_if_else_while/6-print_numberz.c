#include <stdio.h>

/**
* main - Print all single digit numbers using only putchar
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int d;

	for (d = 0; d < 10; d++)
	putchar(d + '0');

	putchar('\n');

	return (0);
}
