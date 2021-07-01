#include "holberton.h"
/**
 * _strncat - concatenates two strings up to n *src string
 * @dest: string where we want to append
 * @src: string to be appended
 * @n: maximum number of characters to be appended
 * Return: the pointer to the string(dest)
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (*(dest + i))
		i++;

	while (j < n && *(src + j))
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = '\0';
	return (dest);
}
