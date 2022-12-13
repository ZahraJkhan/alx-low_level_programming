#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: A pointer to the first string to be compared to
 * @s2: A pointer to second string to be compared to
 *
 * Return: If s1 < s2 = -1, or 0 else 1
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
