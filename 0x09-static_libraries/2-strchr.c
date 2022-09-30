#include "main.h"

/**
 * *_strchr - Locates a character in a string
 * @s: the string to check in
 * @c: character to check for in string
 *
 * Return: Pointer is c is found else NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	if (*(s + i) == c)
		return (s + i);
	return (0);
}
