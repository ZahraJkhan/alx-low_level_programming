#include "main.h"

/**
 * _strlen - Returns length of a string
 * @str: the length of string to be determined
 *
 * Return: Length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}
