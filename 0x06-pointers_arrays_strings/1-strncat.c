#include "main.h"

/**
 * _strcat - Concatenates two strings using input no frm src
 * @dest: The string to be appended upon.
 * @src: The string to be appended to dest
 * @n: The number of bytes from src to be appended to dest.
 *
 * Return: A pointer to the resulting string destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;
	
	while (*(dest + i))
		i++;
	while (j < n && *(src + j))
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	if (j < n)
		*(dest + i) = *(src + j);
	return (dest);
}
