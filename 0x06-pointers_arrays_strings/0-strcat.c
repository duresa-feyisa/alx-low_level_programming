#include "holberton.h"
/**
 * _strcat - concatenates two strings
 * @src: source string
 * @dest: destination string
 * Return: destination string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (*(dest + i))
		i++;

	while (*(src + j))
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}

	return (dest);
}
