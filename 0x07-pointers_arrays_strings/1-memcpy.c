#include "holberton.h"

/**
 * _memcpy - copies memory area
 * @src: a pointer to destination
 * @dest: destination array where the content is to be copied
 * @n:This is the number of bytes to be copied.
 * Return: A pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
