#include "holberton.h"
/**
 * _strlen - priny length of a string
 * @s :- pointer
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
