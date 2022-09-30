#include "main.h"

/**
 * *_memcpy - Copies memory area
 * @src: memory area from where copying is done
 * @dest: memory area to where copying is done to
 * @n: bytes of memory to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
