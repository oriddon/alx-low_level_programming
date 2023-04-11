#include "main.h"

/**
 * _strchr - function that search for char
 * @s: string for shearch
 * @c: character to search
 * Return: return s
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
