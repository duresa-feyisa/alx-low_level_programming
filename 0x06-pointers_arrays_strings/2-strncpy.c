#include "holberton.h"
/**
 * _strncpy - where the content is to be copied
 * @dest: string where we want to append
 * @src: string which will be copied
 * @n: maximum number of characters to be copied
 * Return: the pointer to the string(dest)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0 ; j < n; j++)
		*(dest + j) = *(src + j);
	return (dest);
}
