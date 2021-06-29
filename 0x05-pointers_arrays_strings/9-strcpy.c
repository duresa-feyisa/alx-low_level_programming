#include "holberton.h"
/**
 * _strcpy - copies the string
 * @dest :- character pointer
 * @src :- character pointer
 * Return: character value
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0, j;

	while (*(src + i))
		++i;

	i = i + 1;

	for (j = 0; j < i; j++)
	{
		dest[j] = src[j];
	}

	return (dest);
}
