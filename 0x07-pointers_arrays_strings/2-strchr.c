#include "holberton.h"

/**
 * _strchr - locates a character in a string
 * @s:The string in which the character is searched
 * @c:The character that is searched in the string str
 * Return: The pointer to the first occurrence of the character
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i))
	{
		if (*(s + i) == c)
			return (s + i);
		i++;
	}
	if (*(s + i) == c)
		return (s + i);

	return (0);
}
