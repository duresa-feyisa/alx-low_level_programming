#include <stdio.h>

/**
* main - Print all single digit numbers using only putchar
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');

		if (i < 9)
		{
			putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
