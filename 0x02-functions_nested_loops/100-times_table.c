#include "holberton.h"

/**
 * main - check the code for ALX School students.
 * @n - integer value
 * Return: void.
 */

void print_times_table(int n)
{
	int x, y, z, u, d, a, b;

	if (n >= 0 && n <= 15)
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				z = x * y;
				if (z > 99)
				{
					u = z % 10;
					d = ((z - u) / 10);
					a = d % 10;
					b = ((d - u) / 10);
					if (b == 0)
						b++;

					_putchar(44);
					_putchar(32);
					_putchar(b + '0');
					_putchar(a + '0');
					_putchar(u + '0');
				}
				else if (z > 9)
				{
					u = z % 10;
					d = ((z - u) / 10);

					_putchar(44);
					_putchar(32);
					_putchar(32);
					_putchar(d + '0');
					_putchar(u + '0');
				}
				else
				{
					if (y != 0)
					{
						_putchar(44);
						_putchar(32);
						_putchar(32);
						_putchar(32);
					}

					_putchar(z + '0');
				}

			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
