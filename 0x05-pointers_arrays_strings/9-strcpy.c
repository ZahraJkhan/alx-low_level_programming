#include "main.h"

/**
 * _strcpy - copies string ponted by src incl terminating null 0 -buffer pointed to
 * @dest: a buffer to copy string to
 * @src: the source string to copy
 * Return: Pointer to destination string
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	return (dest);
}
