#include <stdio.h>
/**
 * main - print first 98 Fibonacci numbers
 *
 * Return: always 0
 */
int main(void)
{
	int i = 0;
	unsigned long j = 1, k = 2;

	printf("1, 2");
	while (i < 96)
	{
		k = k + j;
		j = k - j;
		printf(", %lu", k);
		i++;
	}
	printf("\n");
	return (0);
}
