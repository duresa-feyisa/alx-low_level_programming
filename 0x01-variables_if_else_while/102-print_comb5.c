#include <stdlib.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int i, j, k, l;

	for (k = 48; k <= 57; k++)
	{
		for (i = 48; i < 57; i++)
		{
			for (j = 48; j <= 57; j++)
			{
				for (l = 49; l <= 57; l++)
				{
					if (k <= j)
					{
					if (l > i)
					{
						putchar(k);
						putchar(i);
						putchar(32);
						putchar(j);
						putchar(l);

					if (!((i == 56) && (k == 57)))
					{
						putchar(44);
						putchar(32);
					}
					}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
